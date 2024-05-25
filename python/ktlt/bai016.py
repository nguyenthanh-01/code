def main():
    l, r = map(int, input().split())

    Cnt = 0

    for i in range(l, r + 1):
        if Nguyen_to_2(i) and Nguyen_to_3(i) and Nguyen_to_1(i):
            Cnt += 1

    print(Cnt)

def Nguyen_to_1(n):
    if n < 2:
        return False

    if n == 2:
        return True

    if n % 2 == 0:
        return False

    Sqrt = int(n**0.5)
    
    for i in range(3, Sqrt + 1, 2):
        if n % i == 0:
            return False
    
    return True

def Nguyen_to_2(n):
    Arr = [0, 0, 1, 1, 0, 1, 0, 1, 0, 0]

    while n != 0:
        Tmp = Arr[n % 10]

        if Tmp == 0:
            return False
        
        n //= 10

    return True

def Nguyen_to_3(n):
    Sum = 0

    while n != 0:
        Sum += n % 10
        n //= 10
    
    return Nguyen_to_1(Sum)

main()
