# '''
# Create a Python program that checks whether a given square matrix is diagonal. A diagonal matrix is a square matrix (same number of rows and columns) where all the entries outside the main diagonal are zero. The program should prompt the user to input the dimensions of the matrix and then input the matrix elements. The program should then determine whether the matrix is diagonal and print 1 if it is, otherwise print 0
# '''
# import numpy as np
# row , col = map(int,input("Row,Column : ").split(","))
# if row != col :
#     print("Please enter a square matrix.")
# else :
#     matrix =[]
#     for i in range(row):
#         while True: # Keep asking until correct input is provided
#             row_input = list(map(int,input(f"Row {i+1} : ").split())) 
#             if len(row_input) != col:
#                 print(f"Error: Row {i+1} must have exactly {col} elements. Try again.")
#             else:
#                 matrix.append(row_input)
#                 break
#     #print(np.array(matrix))                  
#     arr = np.array(matrix)
#     isDiagonal = True
#     for i in range(row):
#         for j in range(col):
#             if i != j:
#                 if arr[i][j] != 0:
#                     isDiagonal = False 
#                     break
#     print(1 if isDiagonal else 0)



'''
Create a Python program that adds the transpose of a given matrix by a scalar. The program should prompt the user to input the dimensions of the matrix, the elements of the matrix, and the scalar value. The program should then compute the transpose of the matrix, add it by the scalar, and print the resulting matrix.
'''
import numpy as np
row , column = map(int,input("Row,Column : ").split(","))
matrix = []
for i in range(row):
    while True: # constantly asks until else block is reached and i is reached
        row_input = (list(map(int,input(f"Row {i+1}: ").split())))
        if len(row_input) != column:
            print(f"Error: Row {i+1} should exactly have {column} columns/elements.")
        else:
            matrix.append(row_input)
            break
arr = np.array(matrix)
transposed_matrix = np.transpose(arr)
scalar = int(input("Enter a scalar: "))
print(transposed_matrix,"\n",transposed_matrix+scalar)