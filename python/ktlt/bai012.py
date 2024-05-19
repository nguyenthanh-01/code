def main():
    # res = (k^n - 1) // (k - 1) * arr[1]

    arr_1, k, n = map(int, input().split())
    res = (k**n - 1) // (k - 1) * arr_1

    print(res)

main()
