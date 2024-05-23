def main():
    # số lớn nhất mà a * b chia hết
    a, b = map(int, input().split())
    ans = (a + b - 1) // b * b
    print(ans)

main()
