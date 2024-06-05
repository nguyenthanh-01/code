def main():
    Arr = [Input() for i in range(3)]
    Arr = [j for i in Arr for j in i]
    Lib = {1:0, 2:0, 3:0, 4:0, 5:0, 6:0, 7:0, 8:0, 9:0}

    for i in Arr:
        try:
            Lib[i] += 1
        except:
            print("INVALID")
            return
    
    for i in Lib.values():
        if i != 1:
            print("INVALID")
            return

    print("VALID")
    
def Input():
    return list(map(int, input().split()))

main()
