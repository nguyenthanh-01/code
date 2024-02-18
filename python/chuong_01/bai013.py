def main():
    n = int(input())
    nam = n // 365
    n %= 365
    tuan = n // 7
    n %= 7
    print(nam, tuan, n)

main()
