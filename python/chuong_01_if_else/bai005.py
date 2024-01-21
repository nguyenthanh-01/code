def main():
    x1, y1, x2, y2 = map(int, input().split())
    res = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5
    print(f"{res:.2f}")

if __name__ == "__main__":
    main()
