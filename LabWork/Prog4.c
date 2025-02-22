#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }


    int numberOfEven = 0, numberOfOdd = 0;
    for(int i = 0; i < length; i++){
        if (arr[i]%2==0) numberOfEven++;
        else numberOfOdd++;
    }
    int even[numberOfEven], odd[numberOfOdd];

    for(int i = 0, j = 0, k = 0; i < length; i++){
        if (arr[i]%2==0) 
        {
            even[j] = arr[i];
            j++;
        }
        else 
        {
            odd[k] = arr[i];
            k++;
        }
    }


    printf("\nThe even numbers are : ");
    for (int i = 0; i < numberOfEven; i++)
        printf("%d ", even[i]);


    printf("\nThe odd numbers are : ");
    for (int i = 0; i < numberOfOdd; i++)
        printf("%d ", odd[i]);

    return 0;
}