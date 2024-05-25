def main():
    # C(k, n) = n! / (k! (n - k)!)
    # C(k, n) = max > n! / min!

    k, n = map(int, input().split())
    
    Ts = Giai_thua(max(k, n - k), n)
    Ms = Giai_thua(0, min(k, n - k))
    
    print(Ts // Ms)

def Giai_thua(k, n):
    Res = 1

    for i in range(k + 1, n + 1):
        Res *= i

    return Res

main()
