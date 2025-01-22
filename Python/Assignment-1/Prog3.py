num, digit = map(int, input("Enter a number and a digit : ").split())
print(num*10 + digit%10)