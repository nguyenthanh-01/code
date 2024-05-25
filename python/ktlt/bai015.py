def main():
    n = int(input())
    
    Ans = Giai_thua(n)
    
    print(Ans)

def Giai_thua(n):
    Arr = [1]

    for i in range(1, n + 1):
        Tmp = 0

        for j in range(len(Arr)):
            Res = Arr[j] * i + Tmp
            Arr[j] = Res % 10
            Tmp = Res // 10

        while Tmp != 0:
            Arr += [Tmp % 10]
            Tmp //= 10

    return "".join(map(str, Arr[::-1]))

main()
