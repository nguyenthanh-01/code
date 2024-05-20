def main():
    N = int(input())
    min_times = min_frying_times(N)
    print(min_times)

def min_frying_times(N):
    return (N + 8) // 9

main()
