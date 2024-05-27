def main():
    n = int(input())

    Val = [0]
    Tong(n, Val)

    print(Val[-1])

def Tong(n, Val):
    if n == 0:
        return
    
    Val[0] += n

    Tong(n - 1, Val)

main()
