def tong_uoc_so(n):
    tong = 0
    for i in range(1, n//2 + 1):
        if n % i == 0:
            tong += i
    tong += n
    return tong
