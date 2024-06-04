def main():
    arr = [1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8]
    x = 2

    print(tk_np(arr, x))

def tk_np(arr, x):
    l = 0
    r = len(arr) - 1

    pos = -1

    while l <= r:
        m = l + (r - l) // 2

        if arr[m] == x:
            pos = m
            r = m - 1

        elif arr[m] < x:
            l = m + 1
        elif arr[m] > x:
            r = m - 1

    return pos

main()
