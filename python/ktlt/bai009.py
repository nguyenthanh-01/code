def main():
    a, b = map(int, input().split())
    
    Ans = (a + b - 1) // b * b
    
    print(Ans)

main()
