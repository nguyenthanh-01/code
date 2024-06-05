def main():
    Str = input()

    Key = 1

    for i in Str:
        if not i.islower():
            Key = 0
            break

    if Key != 0:
        print("YES")
    else:
        print("NO")

main()
