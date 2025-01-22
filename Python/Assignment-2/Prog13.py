income = int(input("Enter your income: "))
incomeTax = 0

if 5000 <= income < 6000:
    incomeTax = 0.1 * (income - 5000)
elif 6000 <= income < 15000:
    incomeTax = 100 + 0.2 * (income - 6000)
elif income >= 15000:
    incomeTax = 1900 + 0.3 * (income - 15000)
else:
    # Assign None for invalid incomes (<= 0), 0 for incomes in the range (0, 5000)
    incomeTax = None if income <= 0 else 0

# Print the result or handle invalid inputs
print(incomeTax if incomeTax is not None else "Invalid Input")
