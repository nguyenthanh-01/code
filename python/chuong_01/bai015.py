def main():
    n, a, b = map(int, input().split())
    if a <= b / 2:
        print(n * a)
    else:
        print(n // 2 * b + a * (n%2))

main()
