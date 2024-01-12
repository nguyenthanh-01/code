# sum: tính tổng
def main():
    expenses = []
    test = lambda x: x * 2
    print(sum(map(test, [2, 3, 5, 8])))

def add_expense(expenses, amount, category):
    expenses.append({'amount': amount, 'category': category})

def print_expenses(expenses):
    for expense in expenses:
        print(f'Amount: {expense["amount"]}, Category: {expense["category"]}')

main()
