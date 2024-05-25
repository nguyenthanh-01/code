def main():
    a, b = map(int, input().split())
    
    Max = a if a > b else b
    
    print(Max)

main()
