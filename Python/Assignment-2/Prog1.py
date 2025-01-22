import math
a,b,c = map(float, int("Enter a number : "). split())

s = (a + b + c)/2

result = math.sqrt(s*(s-a)*(s-b)*(s-c))

print("Area of the triangle : ", result)