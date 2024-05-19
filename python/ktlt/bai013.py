def main():
    # C(k, n) = n! / (k! (n - k)!)
    # C(k, n) = max > n! / min!

    k, n = map(int, input().split())

    ts = gt(max(k, n - k), n)
    ms = gt(0, min(k, n - k))

    print(ts // ms)

def gt(k, n):
    res = 1

    for i in range(k + 1, n + 1):
        res *= i

    return res

main()
