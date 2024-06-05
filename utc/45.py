def main():
    n, s, t = map(int, input().split())

    Tmp = min(s, t)

    print(n - Tmp + 1)

main()
