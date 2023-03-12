n = int(input("Nhập số nguyên dương n: "))
s = 1
for i in range(1, n+1):
    s *= i
print("Tổng S(n) = ", s)
