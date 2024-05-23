def main():
    n = int(input())

    for i in range(1, n + 1):
        chr = ""

        if i % 2 != 0:
            chr += f"{i}"
        else: chr += "L"

        if i % 4 == 0:
            chr += "T"

        if i % 8 == 0:
            chr += "O"

        if i % 16 == 0:
            chr += "L"

        print(chr)

main()
