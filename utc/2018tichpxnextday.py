from datetime import datetime, timedelta

def main():
    input_date = input()
    date = datetime.strptime(input_date, "%d/%m/%Y")
    next_date = date + timedelta(days=1)
    day = next_date.day
    month = next_date.month
    year = next_date.year
    print(f"{day}/{month}/{year}")

main()
