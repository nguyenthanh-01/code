def main():
    a, b, c = map(int, input().split())
    if a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()
