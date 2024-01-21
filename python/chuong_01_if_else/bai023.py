def main():
    n, m = map(int, input().split())
    min_s, max_s = 0, n
    if n%2 == 0:
        min_s = n // 2
    else:
        min_s = n // 2 + 1
    ans = (min_s + m - 1) // m * m
    if ans <= max_s:
        print(ans)
    else:
        print(-1)

if __name__ == "__main__":
    main()
