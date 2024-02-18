def main():
    n = int(input())
    yes() if n%2 == 0 else no()
    yes() if n%3 == 0 and n%5 == 0 else no()
    yes() if n%3 == 0 and n%7 != 0 else no()
    yes() if n%3 == 0 or n%7 == 0 else no()
    yes() if n > 30 and n < 50 else no()
    yes() if n >= 30 and (n%2 == 0 or n%3 == 0 or n%5 == 0) else no()
    m = n%10
    yes() if n >= 10 and n <= 99 and m in {2, 3, 5, 7} else no()
    yes() if n <= 100 and n%23 == 0 else no()
    yes() if n < 10 or n > 20 else no()
    yes() if m%3 == 0 else no()

def yes():
    print("YES")

def no():
    print("NO")

main()
