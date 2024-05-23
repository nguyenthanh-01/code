def main():
    n = int(input())
    sum = n + 1
    ans = n // 2 * sum + n % 2 * sum // 2
    print(ans)

main()
