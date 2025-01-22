num = str(int(input("Enter  a number : ")))

print(f"{num} is palindrome" if num==num[::-1] else f"{num} is not palindrome.")