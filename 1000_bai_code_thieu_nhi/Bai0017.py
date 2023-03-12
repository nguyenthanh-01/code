import math

def calculate_s(x, n):
    s = 0
    for i in range(1, n+1):
        s += x**i / math.factorial(i)
    return s
