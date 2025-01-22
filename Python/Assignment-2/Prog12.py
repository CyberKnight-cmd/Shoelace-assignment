def factorial(num:int):
    if num>1:
        return num*factorial(num-1)
    else:
        return 1
    
number = int(input("Enter a number : "))
print("Factorial : ", factorial(num=number))