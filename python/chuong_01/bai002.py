def main():
    a, b, c = map(int, input().split())
    res = a * (b + c) + b * (a + c)
    print(res)

main()
