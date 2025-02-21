n = int(input("Enter n = "))

for i in range(n):
    a = "".join(f"{j+1}" for j in range(i+1))
    print(" "*(n-i) + a + (a[::-1])[1:])