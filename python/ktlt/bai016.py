def main():
    l, r = map(int, input().split())

    cnt = 0

    for i in range(l, r + 1):
        if nt_2(i) and nt_3(i) and nt_1(i):
            cnt += 1

    print(cnt)

def nt_1(n):
    if n < 2:
        return False

    if n == 2:
        return True

    if n % 2 == 0:
        return False

    sqrt = int(n**0.5)
    
    for i in range(3, sqrt + 1, 2):
        if n % i == 0:
            return False
    
    return True

def nt_2(n):
    arr = [0, 0, 1, 1, 0, 1, 0, 1, 0, 0]

    while n != 0:
        tmp = arr[n % 10]

        if tmp == 0:
            return False
        
        n //= 10

    return True

def nt_3(n):
    sum = 0

    while n != 0:
        sum += n % 10
        n //= 10
    
    return nt_1(sum)

main()
