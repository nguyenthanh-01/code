def main():
    n = int(input())

    for i in range(1, n + 1):
        Str = ""

        if i % 2 != 0:
            Str += f"{i}"
        else: Str += "L"

        if i % 4 == 0:
            Str += "T"

        if i % 8 == 0:
            Str += "O"

        if i % 16 == 0:
            Str += "L"

        print(Str)

main()
