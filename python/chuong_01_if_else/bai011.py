def main():
    a, b, c = map(int, input().split())
    if a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a:
        print("INVALID")
    else:
        if a == b and b == c:
            print("1")
        elif a == b or a == c or b == c:
            print("2")
        elif a*a == b*b + c*c or b*b == a*a + c*c or c*c == b*b + a*a:
            print("3")
        else:
            print("4")

if __name__ == "__main__":
    main()
