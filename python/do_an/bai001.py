def main():
    print(arithmetic_arranger(["32 + 8", "1 - 3801", "9999 + 9999", "523 - 49"], True))

def arithmetic_arranger(problems, re_nhanh = False):
    so_luong_problems = len(problems)
    if so_luong_problems > 5:
        return "Error: Too many problems."

    cmp = lambda x: x.split()[1]
    ky_tu = list(map(cmp, problems))
    for _ in ky_tu:
        if _ in {'*', '/'}:
            return "Error: Operator must be '+' or '-'."

    cmp = lambda x: [x[0], x[2]]
    chu_so = []
    for i in problems:
        chu_so += cmp(i.split())

    for i in chu_so:
        if not i.isdigit():
            return "Error: Numbers must only contain digits."

        so_luong_chu_so = len(i)
        if so_luong_chu_so > 4:
            return "Error: Numbers cannot be more than four digits."

    cmp = lambda x: str(eval(x))
    dap_an = list(map(cmp, problems))

    dong_tren = ""
    dong_giua = ""
    dong_duoi = ""
    dong_dap_an = ""

    so_luong_chu_so = len(chu_so)
    for i in range(0, so_luong_chu_so, 2):
        space = max(len(chu_so[i]), len(chu_so[i+1])) + 2
        dong_tren += chu_so[i].rjust(space)
        dong_giua += ky_tu[i//2] + chu_so[i+1].rjust(space - 1)
        dong_duoi += '-' * space
        dong_dap_an += dap_an[i//2].rjust(space)
        if i < so_luong_chu_so - 2:
            dong_tren += ' ' * 4
            dong_giua += ' ' * 4
            dong_duoi += ' ' * 4
            dong_dap_an += ' ' * 4

    if re_nhanh == False:
        ket_qua = '\n'.join([dong_tren, dong_giua, dong_duoi])
    else:
        ket_qua = '\n'.join([dong_tren, dong_giua, dong_duoi, dong_dap_an])

    return ket_qua

if __name__ == "__main__":
    main()
