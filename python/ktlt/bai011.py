def main():
    # arr[n] = arr[1] + (n - 1) * k
    # sum = n // 2 * (arr[1] + arr[n])

    arr_1, k, n = map(int, input().split())
    arr_n = arr_1 + (n - 1) * k
    val = arr_1 + arr_n
    sum = n // 2 * val + n % 2 * val // 2

    print(sum)

main()
