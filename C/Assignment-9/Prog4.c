#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter the length: ");
    scanf("%d", &length);
    
    int arr[length];
    // reading the array
    for(int i = 0; i < length; i++){
        printf("Element %d : ", i + 1);
        scanf("%d", arr+i);
    }

    // printing the elements 
    for(int i = 0; i < length; i++)
        printf("%d ", *(arr+i));
    return 0;
}