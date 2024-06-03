def main():
    a, b = map(int, input().split())

    if b < 2:
        print(a**b)
        return

    Mod = 10**9 + 7
    Tmp = 0

    while b != 1:
        if b % 2 != 0:
            Tmp = (Tmp + a) % Mod

        a = (a * 2) % Mod
        b //= 2

    Ans = (a + Tmp) % Mod
    print(Ans)

main()
