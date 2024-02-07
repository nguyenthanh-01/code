def main():
    print(add_time("11:43 PM", "24:20", "tueSday"))

def add_time(start, duration, day=None):
    days = ('Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday')

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

    if day is not None:
        day = day.lower().capitalize()
        days = days[days.index(day):] + days[:days.index(day)]
        n = count
        while n > 7:
            n -= 7
        new_time += ', ' + days[n]
    
    if count == 1:
        new_time += ' (next day)'
    elif count > 1:
        new_time += ' (' + str(count) + ' days later)'

    return new_time

if __name__ == "__main__":
    main()
