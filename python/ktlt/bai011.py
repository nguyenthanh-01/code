def main():
    n = int(input())
    
    Sum = n + 1
    Ans = n // 2 * Sum + n % 2 * Sum // 2
    
    print(Ans)

main()
