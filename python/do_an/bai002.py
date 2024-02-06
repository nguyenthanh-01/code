def main():
    print(add_time("11:43 PM", "24:20", "tueSday"))

def tinh_thoi_gian_bat_dau_va_ket_thuc(start, duration):
    init_time = list(map(int, start[:-3].split(':')))
    duration = list(map(int, duration.split(':')))
    init_time[1] += duration[1]
    count = 0
    while init_time[1] > 60:
        count += 1
        init_time[1] -= 60
    init_time[0] += count + duration[0]
    count = 0
    while init_time[0] >= 12:
        init_time[0] -= 12
        if 'PM' in start:
            count += 1
            start = start.replace('PM', 'AM')
        elif 'AM' in start:
            start = start.replace('AM', 'PM')
    init_time[0] = '12' if init_time[0] == 0 else str(init_time[0])
    init_time[1] = str(init_time[1]).rjust(2, '0')
    new_time = ':'.join(init_time) + start[-3:]
    return new_time, count

def tinh_ngay_trong_tuan(day, count):
    days = ('Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday')
    day = day.lower().capitalize()
    days = days[days.index(day):] + days[:days.index(day)]
    n = count
    while n > 7:
        n -= 7
    return days[n]

def add_time(start, duration, day=None):
    new_time, count = tinh_thoi_gian_bat_dau_va_ket_thuc(start, duration)
    if day is not None:
        new_time += ', ' + tinh_ngay_trong_tuan(day, count)
    if count == 1:
        new_time += ' (next day)'
    elif count > 1:
        new_time += ' (' + str(count) + ' days later)'
    return new_time

if __name__ == "__main__":
    main()
