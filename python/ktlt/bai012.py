def main():
    a, k, n = map(int, input().split())
    
    Ans = (k**n - 1) // (k - 1) * a
    
    print(Ans)

main()
