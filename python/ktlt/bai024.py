
def main():
    a, b = map(int, input().split())

    a_old = a
    check_b = b % 2

    while b != 1:
        a *= 2
        b //= 2

    a += check_b * a_old

    print(a)

main()
