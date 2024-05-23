def main():
    # số lớn nhất mà a*b % == 0
    a, b = map(int, input().split())
    ans = (a + b - 1) // b * b
    print(ans)

main()
