def main():
    global a, b, c
    a, b, c = map(int, input().split())
    if a <= 0 or b <= 0 or c <= 0 or x1() or y1() or z1():
        print("INVALID")
    else:
        if a == b and b == c:
            print("1")
        elif a == b or a == c or b == c:
            print("2")
        elif x2() or y2() or z2():
            print("3")
        else:
            print("4")

def x1():
    return a + b <= c

def y1():
    return a + c <= b

def z1():
    return b + c <= a

def x2():
    return a*a + b*b == c*c

def y2():
    return a*a + c*c == b*b

def z2():
    return b*b + c*c == a*a

main()
