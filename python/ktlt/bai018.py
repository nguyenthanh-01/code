def main():
    a, b = map(int, input().split())

    Ucln = Uoc_chung_lon_nhat(a, b)
    Bcnn = Boi_chung_nho_nhat(a, b)

    print(Ucln, Bcnn)

def Uoc_chung_lon_nhat(a, b):
    while b != 0:
        a, b = b, a % b

    return a

def Boi_chung_nho_nhat(a, b):
    return a // Uoc_chung_lon_nhat(a, b) * b

main()
