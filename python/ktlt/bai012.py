def main():
    a, k, n = map(int, input().split())
    
    ans = (k**n - 1) // (k - 1) * a
    
    print(ans)

main()
