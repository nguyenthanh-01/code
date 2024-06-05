def main():
    n = int(input())

    Tmp = 0 if n % 9 == 0 else 1
    Ans = n // 9 + Tmp

    print(Ans)

main()
