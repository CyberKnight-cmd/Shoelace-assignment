#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr[length], max = 0, min = 0;
    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        if (arr[max]<arr[i])
            max = i;

        if (arr[min]>arr[i])
            min = i;
    }

    printf("Largest element : %d\nPosition : %d\n", arr[max], max);
    printf("Smallest element : %d\nPosition : %d", arr[min], min);
    return 0;
}