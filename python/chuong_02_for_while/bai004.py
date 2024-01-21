def main():
    n = int(input())
    tong = 0
    for i in range(1, n + 1):
        tong += 1 / i
    print(f"{tong:.3f}")

if __name__ == "__main__":
    main()
