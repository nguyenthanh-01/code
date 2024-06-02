def main():
    a, b = map(int, input().split())

    Old_a = a
    Check_b = b % 2

    if b < 2:
        print(a**b)
        return

    while b != 1:
        a *= a
        b //= 2

    if Check_b != 0:
        a *= Old_a

    print(a)

main()
