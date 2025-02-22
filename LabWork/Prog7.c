#include <stdio.h>

int main()
{
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // selection sort
    /*
    int min = 0;
    for (int i = 0; i < length; i++)
    {
        min = i;
        for(int j = i + 1; j < length; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if (min!=i){
            arr[min] += arr[i];
            arr[i] = arr[min] - arr[i];
            arr[min] -= arr[i];
        }
    }
        */
    /* 1 0 2 5 4
       0 1 2 5 4
       0 1 2 5 4
       0 1 2 4 5
    */
    // Bubble sort
    /*
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if (arr[i]>arr[j])
            {
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }

        }
    }
        */

    // Insertion Sort
    /*
    int key, j;
    for (int i = 1; i < length; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    */
    printf("The elements of the array are : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}