def main():
    n = int(input())
    Arr = [Input() for i in range(n)]

    for Pos2 in range(n - 1, -1, -1):
        i = 0
        j = Pos2

        Sum = 0
        while i < n and j < n:
            Sum += Arr[i][j]
            i += 1
            j += 1
        
        print(Sum)

    for Pos1 in range(1, n):
        i = Pos1
        j = 0

        Sum = 0
        while i < n and j < n:
            Sum += Arr[i][j]
            i += 1
            j += 1

        print(Sum)

def Input():
    return list(map(int, input().split()))

main()
