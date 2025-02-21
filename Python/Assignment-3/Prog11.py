n = int(input("Enter n = "))

for i in range(2, n + 2):
    print("".join(f"{j}" for j in range(1, i)))