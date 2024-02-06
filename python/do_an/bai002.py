def main():
    print(add_time("11:43 PM", "24:20", "tueSday"))

def add_time(start, duration, day=None):
    days = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

    # Convert start time to 24-hour format
    start_time = start.split()
    start_hours, start_minutes = map(int, start_time[0].split(':'))
    if start_time[1] == 'PM' and start_hours != 12:
        start_hours += 12
    elif start_time[1] == 'AM' and start_hours == 12:
        start_hours = 0

    # Convert duration to minutes
    duration_hours, duration_minutes = map(int, duration.split(':'))
    duration_total = duration_hours * 60 + duration_minutes

    # Calculate new time in minutes
    new_time_total = start_hours * 60 + start_minutes + duration_total

    # Calculate new days, hours, and minutes
    new_days, new_time_in_day = divmod(new_time_total, 24 * 60)
    new_hours, new_minutes = divmod(new_time_in_day, 60)

    # Convert new hours to 12-hour format
    if new_hours >= 12:
        period = "PM"
        new_hours -= 12
    else:
        period = "AM"
    if new_hours == 0:
        new_hours = 12

    # Format new time
    new_time = f"{new_hours}:{str(new_minutes).zfill(2)} {period}"

    # Add day of the week if provided
    if day:
        day_index = (days.index(day.capitalize()) + new_days) % 7
        new_time += f", {days[day_index]}"

    # Add number of days later
    if new_days == 1:
        new_time += " (next day)"
    elif new_days > 1:
        new_time += f" ({new_days} days later)"

    return new_time

if __name__ == "__main__":
    main()
