def main():
    global a, b, c
    a, b, c = map(int, input().split())
    if a > 0 and b > 0 and c > 0 and x() and y() and z():
        print("YES")
    else:
        print("NO")

def x():
    return a + b > c

def y():
    return a + c > b

def z():
    return b + c > a

main()
