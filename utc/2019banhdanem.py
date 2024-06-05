def main():
    n = int(input())

    Tmp = 1 if n % 9 != 0 else 0
    Ans = n // 9 + Tmp

    print(Ans)

main()
