def main():
    a, b = map(int, input().split())
    res1 = a // b * b
    res2 = (a + b - 1) // b * b
    print(res1, res2)

main()
