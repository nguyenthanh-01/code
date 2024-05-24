def main():
    a, b = map(int, input().split())
    
    ans = (a + b - 1) // b * b
    
    print(ans)

main()
