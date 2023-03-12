n = int(input("Nhập một số nguyên dương n: "))

print("Các ước số của", n, "là: ")
for i in range(1, n+1):
    if n % i == 0:
        print(i)
