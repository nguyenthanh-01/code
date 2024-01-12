# lambda x: x * 2
# input: x
# output: x * 2
def main():
    expenses = []
    test = lambda x: x * 2
    print(test(3))

def add_expense(expenses, amount, category):
    expenses.append({'amount': amount, 'category': category})

def print_expenses(expenses):
    for expense in expenses:
        print(f'Amount: {expense["amount"]}, Category: {expense["category"]}')

main()
