def main():
    n = int(input())
    positions = list(map(int, input().split()))
    minimum_distance = calculate_minimum_distance(n, positions)
    print(minimum_distance)

def calculate_minimum_distance(n, positions):
    positions.sort()
    median_position = positions[n // 2]
    total_distance = sum(abs(median_position - pos) for pos in positions)
    return total_distance

main()
