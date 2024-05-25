def main():
    n = int(input())
    
    Sqrt = int(n**0.5)
    Sum = 0

    for i in range(1, Sqrt):
        if n % i == 0:
            Sum += (i + n // i)

    if Sqrt * Sqrt == n:
        Sum += Sqrt

    print(Sum)

main()
