def main():
    c = input()
    if c.islower():
        print(c.upper())
    elif c.isupper():
        print(c.lower())
    else:
        print(c)

if __name__ == "__main__":
    main()
