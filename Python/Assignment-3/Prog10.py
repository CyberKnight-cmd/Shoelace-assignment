n = int(input("Enter n = "))

for i in range(n):
    print("".join(f"{chr(65 + j)}" for j in range(0, i*2 + 1,2)))