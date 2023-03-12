n = int(input("Nhập số nguyên dương n: "))
tich = 1
for i in range(1, n+1):
    if n % i == 0:
        tich *= i
print("Tích tất cả ước số của", n, "là", tich)
