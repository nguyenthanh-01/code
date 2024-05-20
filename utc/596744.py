def main():
    n = int(input())
    process_numbers(n)

def process_numbers(n):
    for i in range(1, n + 1):
        if i % 2 == 0:
            print('L', end='')
        else:
            print(i, end='')
        
        if i % 4 == 0:
            print('T', end='')

        if i % 8 == 0:
            print('O', end='')

        if i % 16 == 0:
            print('L', end='')
        
        print()

main()
