import math

def sum_series(x, n):
    sum = 0
    for i in range(n+1):
        sum += (x**(2*i))/(math.factorial(2*i))
    return sum
