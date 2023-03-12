n = int(input("Nhập số nguyên dương n: "))
s = sum(i/(i+1) for i in range(1, n+1))
print("Tổng S(n) = ", s)
