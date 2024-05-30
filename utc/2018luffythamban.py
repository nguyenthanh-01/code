def main():
    n = int(input())
    Arr = list(map(int, input().split()))

    Arr.sort()
    Val = Arr[n // 2]
    Sum = 0

    for i in range(n):
        Tmp = Max(Arr[i], Val)
        Sum += Tmp

    print(Sum)

def Max(a, b):
    return a - b if a > b else b - a

main()
