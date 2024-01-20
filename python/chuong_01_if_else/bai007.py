def main():
    a, b = map(int, input().split())
    res1 = a // b * b
    print(res1)
    res2 = (a + b - 1) // b * b
    print(res2)

if __name__ == "__main__":
    main()
