def main():
    a, b, c = map(int, input().split())
    res = a * (b + c) + b * (a + c)
    print(res)

if __name__ == "__main__":
    main()
