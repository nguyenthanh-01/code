def main():
    l, r = map(int, input().split())
    arr = [1] * (r - l + 1)
    sang_nt(arr, l, r)
    print(arr)

def sang_nt(arr, l, r):
    sqrt = int(r**0.5)

    for i in range(2, sqrt + 1):
        Max = max(i * i, (l + i - 1) // i * i)
        
        for j in range(Max, r + 1, i):
            arr[j - l] = 0

main()
