allowedOperator = ['+', '-', '*', '/', '^']
allowedAnswer = ['y','n']

def display_menu():
    print("CALCULATOR")
    print('This is all of the allowed operators... ',  *allowedOperator, sep =', ')
display_menu()
def validOperator(operator):
    return operator in allowedOperator
def validOperator(operator):
    return operator in allowedOperator
def get_user_input():
    global num1
    global num2
    global operator
    while True:
        try:
            num1 = float(input("Enter Number 1: "))
            break
        except ValueError:
            print("Invalid, try again: ")
    while True:
        operator = input("Input an allowed operator: ")
        if validOperator(operator):
            break
        else:
            print("Invalid, try again: ")
    while True:
        try:
            num2 = float(input("Enter Number 2: "))
            break
        except ValueError:
            print("Invalid, try again: ")
    print("Equation is ", num1, operator, num2)
def calculate():
    get_user_input()
    if operator == '+':
        result = num1 + num2
        print(result)
    elif operator == '-':
        result = num1 - num2
        print(result)
    elif operator == '*':
        result = num1 * num2
        print(result)
    elif operator == '/':
        result = num1 / num2
        print(result)
    elif operator == '^':
        result = num1 ** num2
        print(result)

while True:
    calculate()
    doMore = input("Continue? ")
    if doMore != 'y':
        break