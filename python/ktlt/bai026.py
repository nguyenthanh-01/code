def main():
    n = int(input())

    Min = [10**6]
    Check(n, 0, Min)

    print(Min)

def Check(n, Cnt, Min):
    if n == 1:
        if Min[0] > Cnt:
            Min[0] = Cnt
        return

    if n % 2 == 0:
        Check(n // 2, Cnt + 1, Min)
    
    if n % 3 == 0:
        Check(n // 3, Cnt + 1, Min)

    Check(n - 1, Cnt + 1, Min)

main()
