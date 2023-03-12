def sum_series(n):
    S = 0 # khởi tạo giá trị của S là 0
    for i in range(1, n+1): # lặp từ 1 đến n
        denominator = sum(range(1, i+1)) # tính mẫu số
        S += 1/denominator # cộng thêm giá trị mới vào S
    return S
