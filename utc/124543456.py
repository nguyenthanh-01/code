def main():
    n = int(input())
    
    Sum = 0
    Cnt = 0
    Max = 0

    for i in range(n):
        l, r = map(float, input().split())
        
        Res = l * r
        Sum += Res
        Cnt += 1
        
        if Max < Res:
            Max = Res

    Ans = Sum / Cnt
    
    print(f"{Ans:.3f}")
    print(f"{Max:.3f}")

main()
