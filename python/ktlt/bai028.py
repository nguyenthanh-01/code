def main():
    arr = [1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8]
    x = 2

    print(tk_np(arr, x))

def tk_np(arr, x):
    l = tk_np_(arr, x)
    r = tk_np_(arr, x, 1)
    return r - l + 1

def tk_np_(arr, x, tree = 0):
    l = 0
    r = len(arr) - 1

    if tree == 0:
        pos = -1
    else:
        pos = -2

    while l <= r:
        m = l + (r - l) // 2

        if arr[m] == x:
            pos = m

            if tree == 0:
                r = m - 1
            else:
                l = m + 1

        elif arr[m] < x:
            l = m + 1
        elif arr[m] > x:
            r = m - 1

    return pos

main()
