def main():
    n = int(input())

    dimensions = []
    for _ in range(n):
        l, r = map(float, input().split())
        dimensions.append((l, r))

    average_area, max_area = calculate_areas(n, dimensions)

    print(f"{average_area:.3f}")
    print(f"{max_area:.3f}")

def calculate_areas(n, dimensions):
    total_area = 0
    max_area = 0

    for l, r in dimensions:
        area = l * r
        total_area += area
        if area > max_area:
            max_area = area
    
    average_area = total_area / n
    return average_area, max_area

main()
