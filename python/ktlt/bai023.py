def main():
    a, b = map(int, input().split())

    if b < 2:
        print(a**b)
        return

    Tmp = 1

    while b != 1:
        if b % 2 != 0:
            Tmp *= a

        a *= a
        b //= 2

    print(a * Tmp)

main()
