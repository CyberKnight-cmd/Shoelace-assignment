n = int(input("Enter n = "))

for i in range(1,n+1):
    for j in range(1, n + 1):
        if j==i or j==n-i+1:
            print("1", end="")
        else:
            print("0", end="")
    print()