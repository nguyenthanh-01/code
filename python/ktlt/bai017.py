def main():
    l, r = map(int, input().split())

    Arr = [1] * (r - l + 1)
    Sang_nguyen_to(Arr, l, r)

    print(Arr)

def Sang_nguyen_to(Arr, l, r):
    Sqrt = int(r**0.5)
    
    if l < 2:
        Arr[0] = 0
    if l < 1:
        Arr[1] = 0

    for i in range(2, Sqrt + 1):
        Max = max(i * i, (l + i - 1) // i * i)
        
        for j in range(Max, r + 1, i):
            Arr[j - l] = 0

main()
