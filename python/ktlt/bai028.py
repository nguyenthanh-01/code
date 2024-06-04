def main():
    Arr = [1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8]
    x = 2

    print(Tim_kiem_nhi_phan(Arr, x))

def Tim_kiem_nhi_phan(Arr, x):
    l = 0
    r = len(Arr) - 1

    Pos = -1

    while l <= r:
        m = l + (r - l) // 2

        if Arr[m] == x:
            Pos = m
            r = m - 1

        elif Arr[m] < x:
            l = m + 1
        elif Arr[m] > x:
            r = m - 1

    return Pos

main()
