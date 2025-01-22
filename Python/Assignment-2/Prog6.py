marks = int(input("Enter your marks : "))
if(marks>=90):
    print("Grade : Ex")
elif(marks>=80 and marks<90):
    print("Grade : A")
elif(marks>=70 and marks<80):
    print("Grade : B")
elif(marks>=60 and marks<70):
    print("Grade : C")
elif(marks>=50 and marks<60):
    print("Grade : D")
elif(marks>=35 and marks<50):
    print("Grade : P")
else:
    print("Grade : F")