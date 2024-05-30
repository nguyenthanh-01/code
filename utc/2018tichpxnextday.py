def main():
    ngay, thang, nam = map(int, input().split("/"))

    ngay_max = check(thang, nam)

    ngay += 1

    if ngay > ngay_max:
        thang += 1
        ngay = 1

    if thang > 12:
        nam += 1
        thang = 1

    print(f"{ngay}/{thang}/{nam}")

def check(thang, nam):
    if thang == 2:
        if nam % 400 == 0 or (nam % 4 == 0 and nam % 100 != 0):
            return 29
        return 28
    elif thang == 4 or thang == 6 or thang == 9 or thang == 11:
        return 30
    else:
        return 31

main()
