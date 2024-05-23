def main():
    n = int(input())
    sqrt = int(n**0.5)
    sum = 0

    for i in range(1, sqrt + 1):
        if n % i == 0:
            sum += (i + n // i)

    if sqrt * sqrt == n:
        sum -= sqrt

    print(sum)

main()
