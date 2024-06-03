def main():
    n = int(input())

    Str = ""

    while n != 0:
        Str += f"{n%2}"
        n //= 2

    m = len(Str)
    if m < 8:
        Str += "0" * (8 - m)

    print(Str[::-1])

main()
