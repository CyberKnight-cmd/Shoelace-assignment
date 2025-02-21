#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter length of the array : ");
    scanf("%d", &length);
    
    int arr[length], arrCopy[length];

    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Original\tCopied\n");
    for(int i = 0; i < length; i++){
        arrCopy[i] = arr[i];
        printf("%d\t\t", arr[i]);
        printf("%d\n", arrCopy[i]);
    }
    return 0;
}