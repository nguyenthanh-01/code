def main():
    n = int(input())

    Min = [10**6]
    check(n, 0, Min)

    print(Min)

def check(n, Cnt, Min):
    if n == 1:
        if Min[0] > Cnt:
            Min[0] = Cnt
        return

    if n % 2 == 0:
        check(n // 2, Cnt + 1, Min)
    
    if n % 3 == 0:
        check(n // 3, Cnt + 1, Min)

    check(n - 1, Cnt + 1, Min)

main()
