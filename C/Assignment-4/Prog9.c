#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr[length], rev[length];
    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        rev[length-i-1] = arr[i];
    }

    printf("Original array Reversed array\n");
    for(int i = 0; i < length; i++)
        printf("%d\t\t%d\n", arr[i], rev[i]);

    return 0;
}