def getMin(arr, n):
    return min(arr)

def getMax(arr, n):
    return max(arr)

if __name__ == '__main__':
    arr = [12, 1234, 45, 67, 1]
    n = len(arr)
    print("Minimum element of array: ", getMin(arr, n))
    print("Maximum element of array: ", getMax(arr, n))
