
def findPeak(arr, n):
    l = 0
    r = n-1
    while(l <= r):
        mid = (l + r) >> 1
        if((mid == 0 or arr[mid - 1] <= arr[mid]) and (mid == n - 1 or arr[mid + 1] <= arr[mid])):
            break
        if(mid > 0 and arr[mid - 1] > arr[mid]):
            r = mid - 1
        else:
            l = mid + 1
    return arr[mid]

arr = [1, 3, 20, 4, 1, 0]
n = len(arr)
print(f"Index of a peak point is {findPeak(arr, n)}")
