n = int(input("Nhập số nguyên dương n: "))
s = sum(1/(2*i) for i in range(1, n+1))
print("Tổng S(n) = ", s)
