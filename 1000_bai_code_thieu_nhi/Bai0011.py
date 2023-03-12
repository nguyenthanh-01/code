n = int(input("Nhập giá trị n: "))
s = 0
giaithua = 1

for i in range(1, n+1):
    giaithua *= i
    s += giaithua

print("Tổng S(n) = ", s)
