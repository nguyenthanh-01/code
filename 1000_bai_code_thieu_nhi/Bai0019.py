import math

def calculate_S(x, n):
    sum = 0
    for i in range(n+1):
        sum += ((x**(2*i+1))/(math.factorial(2*i+1)))
    return sum

x = float(input("Nhập giá trị x: "))
n = int(input("Nhập giá trị n: "))

print("Kết quả của S(n) là: ", calculate_S(x, n))
