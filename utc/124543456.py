def main():
    n = int(input())

    sum = 0
    cnt = 0
    Max = 0

    for i in range(n):
        l, r = map(float, input().split())
        res = l * r

        sum += res
        cnt += 1
        if Max < res:
            Max = res

    print(f"{sum / cnt:.3f}")
    print(f"{Max:.3f}")

main()
