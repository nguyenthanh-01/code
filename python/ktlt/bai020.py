def main():
    n = int(input())

    Val = [0]
    Fibonacci(n - 1, Val)

    print(Val[-1])

def Fibonacci(n, Val):
    if n == 1 or n == 0:
        Val[0] += n
        return

    Fibonacci(n - 1, Val)
    Fibonacci(n - 2, Val)

main()
