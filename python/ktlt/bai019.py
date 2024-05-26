def main():
    n = int(input())

    Val = [0]
    tong(n, Val)

    print(Val)

def tong(n, Val):
    if n == 0:
        return
    
    Val[0] += n

    tong(n - 1, Val)

main()
