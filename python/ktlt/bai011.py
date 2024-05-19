
def main():
    # arr[n] = arr[1] + (n - 1) * k
    # sum = n // 2 * (arr[1] + arr[n])

    n = int(input())
    arr_n = 1 + (n - 1) * 1
    sum = n // 2 * (1 + arr_n) + n % 2 * (n + 1) // 2
    print(sum)

main()
