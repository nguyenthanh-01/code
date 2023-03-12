n = int(input("Nhập n: "))
x = int(input("Nhập x: "))

sum = 0   # Khởi tạo biến tổng ban đầu

for i in range(1, n+1):
    # Tính tử số và mẫu số của từng phần tử
    numerator = x**i
    denominator = sum + i

    # Thêm giá trị của phần tử đó vào tổng
    sum += numerator / denominator

print("Giá trị của S(n) là:", sum)
