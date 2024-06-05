def main():
    Arr = [1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8]
    x = 2

    print(Tim_kiem_nhi_phan(Arr, x))

def Tim_kiem_nhi_phan(Arr, x):
    l = Tknp(Arr, x)
    r = Tknp(Arr, x, 1)

    return r - l + 1

def Tknp(Arr, x, If = 0):
    l = 0
    r = len(Arr) - 1

    if If == 0:
        Pos = -1
    else:
        Pos = -3

    while l <= r:
        m = l + (r - l) // 2

        if Arr[m] == x:
            Pos = m
            
            if If == 0:
                r = m - 1
            else:
                l = m + 1

        elif Arr[m] < x:
            l = m + 1
        elif Arr[m] > x:
            r = m - 1

    return Pos

main()
