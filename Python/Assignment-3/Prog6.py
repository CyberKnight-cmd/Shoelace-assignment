n = int(input("Enter n = "))

for i in range(n):
    print(" "*i + "*"*(2*n - (2*i + 1)))