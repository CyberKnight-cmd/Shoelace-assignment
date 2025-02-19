#include <stdio.h>
int main()
{
    int rows = 0, columns = 0;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter element (%d,%d)  : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the array are : \n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}