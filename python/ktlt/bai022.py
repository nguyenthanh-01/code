def main():
    n = int(input())

    Arr = ["1"] * n
    Arr[0] = "0"

    for i in range(2, n):
        Arr[i] = big_int(Arr[i - 2], Arr[i - 1])

    print(Arr[-1])

def big_int(Str1, Str2):
    Str1 = list(map(int, Str1[::-1]))
    Str2 = list(map(int, Str2[::-1]))

    Arr = []
    Tmp = 0
    
    for i in range(len(Str1)):
        Res = Str1[i] + Str2[i] + Tmp
        Arr += [Res % 10]
        Tmp = Res // 10

    for i in range(len(Str1), len(Str2)):
        Res = Str2[i] + Tmp
        Arr += [Res % 10]
        Tmp = Res // 10

    if Tmp != 0:
        Arr += [Tmp]

    return "".join(map(str, Arr[::-1]))

main()
