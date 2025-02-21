def print_pascals_triangle(n):
    triangle = [[1]]  # First row is always [1]
    
    for i in range(1, n):
        row = [1]  # First element is always 1
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])  # Sum of two elements above
        row.append(1)  # Last element is always 1
        triangle.append(row)

    max_width = len(" ".join(map(str, triangle[-1])))  # Width of the last row

    for row in triangle:
        row_str = " ".join(map(str, row))  # Convert numbers to a single string
        print(row_str.center(max_width))   # Center-align each row

n = int(input("Enter number of lines: "))
print_pascals_triangle(n)
