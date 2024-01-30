def main():
    print(arithmetic_arranger(['1 + 1', '2 - 2'], True))

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
    
    top_row = ''
    dashes = ''
    values = list(map(lambda x: eval(x), problems))
    solutions = ''
    for i in range(0, len(chu_so), 2):
        space_width = max(len(chu_so[i]), len(chu_so[i+1])) + 2
        top_row += chu_so[i].rjust(space_width)
        dashes += '-' * space_width
        solutions += str(values[i // 2]).rjust(space_width)
        if i != len(chu_so) - 2:
            top_row += ' ' * 4
            dashes += ' ' * 4
            solutions += ' ' * 4

    bottom_row = ''
    for i in range(1, len(chu_so), 2):
        space_width = max(len(chu_so[i - 1]), len(chu_so[i])) + 1
        bottom_row += ky_tu[i // 2]
        bottom_row += chu_so[i].rjust(space_width)
        if i != len(chu_so) - 1:
            bottom_row += ' ' * 4

    if re_nhanh:
        arranged_problems = '\n'.join((top_row, bottom_row, dashes, solutions))
    else:
        arranged_problems = '\n'.join((top_row, bottom_row, dashes))
    return arranged_problems

if __name__ == "__main__":
    main()
