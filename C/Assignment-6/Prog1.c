#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int *bubbleSort(int arr[], int n, int direction)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    }
    return arr;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ascending = (int *)malloc(n * sizeof(int));
    int *descending = (int *)malloc(n * sizeof(int));

    printf("Array entered : ");
    print(arr, n);

    memcpy(ascending, arr, sizeof(arr));
    memcpy(descending, arr, sizeof(arr));

    printf("Ascending order : ");
    bubbleSort(ascending, n, 1);
    print(ascending, n);

    printf("Descending order : ");
    bubbleSort(descending, n, 0);
    print(descending, n);

    return 0;
}