def main():
    a, b = map(int, input().split())
    print(a + b)
    print(a - b)
    print(a * b)
    if b == 0:
        print("INVALID\n")
    else:
        res = a / b
        print(f"{res:.2f}")

main()
