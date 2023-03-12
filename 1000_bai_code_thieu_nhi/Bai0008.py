n = int(input("Nhập số nguyên dương n: "))
s = sum((2*i+1)/(2*i+2) for i in range(n))
print("Tổng S(n) = ", s)
