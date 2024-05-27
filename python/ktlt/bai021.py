def main():
    n = int(input())

    Arr = [1] * n
    Arr[0] = 0
    Fibonacci(n - 1, Arr)

    print(Arr[-1])

def Fibonacci(n, Arr):
    if n == 1 or n == 0:
        return

    Fibonacci(n - 1, Arr)

    Arr[n] = Arr[n - 2] + Arr[n - 1]

main()
