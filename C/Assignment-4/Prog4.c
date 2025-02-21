#include <stdio.h>

int main()
{
    int length = 0;
    printf("Enter length of the array: ");
    scanf("%d", &length);

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int count;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != -999999)  // Check if not already counted
        {
            count = 1;  // Start with 1 as we already have one occurrence
            for (int j = i + 1; j < length; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -999999;  // Mark duplicate elements
                }
            }
            printf("%d : %d\n", arr[i], count);
        }
    }
    
    return 0;
}
