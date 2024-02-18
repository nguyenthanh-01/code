def main():
    a, b, c, d = map(float, input().split())
    tb = (a + b + c * 2 + d * 3) / 7
    if tb < 5:
        print("YEU")
    elif tb < 6.5:
        print("TRUNG BINH")
    elif tb < 8:
        print("KHA")
    else:
        print("GIOI")

main()
