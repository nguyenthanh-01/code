def main():
    n = int(input())
    
    sum = 0
    cnt = 0
    max = 0

    for i in range(n):
        l, r = map(float, input().split())
        
        res = l * r
        sum += res
        cnt += 1
        
        if max < res:
            max = res

    ans = sum / cnt
    
    print(f"{ans:.3f}")
    print(f"{max:.3f}")

main()
