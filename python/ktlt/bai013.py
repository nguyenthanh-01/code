def main():
    # C(k, n) = n! / (k! (n - k)!)
    # C(k, n) = max > n! / min!

    k, n = map(int, input().split())

    ts = C(max(k, n - k), n)
    ms = C(0, min(k, n - k))

    print(ts // ms)

def C(k, n):
    res = 1

    for i in range(k + 1, n + 1):
        res *= i

    return res

main()
