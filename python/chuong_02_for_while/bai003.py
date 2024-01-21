def main():
    n = int(input())
    tong = 0
    for i in range(0, n + 1, 3):
        tong += i
    print(tong)

if __name__ == "__main__":
    main()
