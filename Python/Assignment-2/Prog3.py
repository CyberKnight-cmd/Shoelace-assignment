a, b, c = map(float, input("Enter the sides of a triangle : ").split())

if a**2 == b**2 + c**2:
    print("Angle A is 90")
else:
    print("Angle A is not 90")