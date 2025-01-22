import math

x1, y1 = map(float, input("Enter the co-ordinates for the 1st point : ").split())
x2, y2 = map(float, input("Enter the co-ordinates for the 2nd point : ").split())

result = math.sqrt((x1-x2)**2 + (y1-y2)**2)
