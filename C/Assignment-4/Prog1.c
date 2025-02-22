#include <stdio.h>
int main()
{
    int length = 0;
    printf("Enter the length : ");
    scanf("%d", &length);

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are : ");
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);

    return 0;
}


