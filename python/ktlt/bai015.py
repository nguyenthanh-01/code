def main():
    n = int(input())
    
    ans = gt(n)
    
    print(ans)

def gt(n):
    arr = [1]

    for i in range(1, n + 1):
        tmp = 0

        for j in range(len(arr)):
            res = arr[j] * i + tmp
            arr[j] = res % 10
            tmp = res // 10

        while tmp != 0:
            arr += [tmp % 10]
            tmp //= 10

    return "".join(map(str, arr[::-1]))

main()
