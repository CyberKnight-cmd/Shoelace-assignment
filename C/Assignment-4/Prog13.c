#include<stdio.h>

int main(){
    int length = 0, evens = 0, odds = 0;
    printf("Enter the length : ");
    scanf("%d", &length);
    
    int arr[length];
    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
        (i%2==0) ? evens++ : odds++;
    }    

    printf("Number of elements on even positions : %d\n", evens);
    printf("Number of elements on odd positions : %d\n", odds);
    return 0;
}