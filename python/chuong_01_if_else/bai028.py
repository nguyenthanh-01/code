def main():
    n, u1, d = map(int, input().split())
    un = u1 + (n - 1) * d
    s = n * (u1 + un) // 2
    print(s)

if __name__ == "__main__":
    main()
