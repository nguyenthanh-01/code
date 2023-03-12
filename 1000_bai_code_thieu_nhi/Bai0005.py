n = int(input("Nhập số nguyên dương n: "))
s = sum(1/(2*i+1) for i in range(n+1))
print("Tổng S(n) = ", s)
