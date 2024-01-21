def main():
    n = int(input())
    tong = 0
    for i in range(1, n + 1):
        tong += i * i
    print(tong)

if __name__ == "__main__":
    main()
