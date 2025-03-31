#include<stdio.h>
int largest(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < max; i++)
        max = arr[i]>max ? arr[i] : max;
    return max;
}

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr[length];
    for(int i = 0; i < length; i++){
        printf("Enter element (%d) : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("%d", largest(arr, length));
    return 0;
}