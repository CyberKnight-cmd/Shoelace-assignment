n = int(input("Enter n = "))

for i in range(n):
    print("".join(f"{chr(64 + j)}" for j in range(2*i+ 1, 2*i + 1 + (n-i))))