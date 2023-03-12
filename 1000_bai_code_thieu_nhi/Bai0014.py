n = int(input("Nhập giá trị của n: "))
x = float(input("Nhập giá trị của x: "))

sum = 0
for i in range(n+1):
    sum += x**(2*i+1)

print("Tổng S(n) =", sum)
