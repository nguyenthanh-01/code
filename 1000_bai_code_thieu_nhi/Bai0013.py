def sum_of_squares(x, n):
    if x**2 == 1:
        return n if x == 1 else 0
    else:
        return x**2 * (1 - x**(2*n)) / (1 - x**2)
