def main():
    a, b = map(int, input().split())

    a_old = a
    check_b = b % 2

    if b < 2:
        print(a**b)
        return

    while b != 1:
        a *= a
        b //= 2

    if check_b != 0:
        a *= a_old

    print(a)

main()
