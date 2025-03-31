#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter the length : ");
    scanf("%d", &length);
    
    int arr[length];
    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int element = 0, found = 0;
    printf("Enter the number you want to search for : ");
    scanf("%d", &element);
    
    for(int i = 0; i < length; i++){
        if (element==arr[i]){
            printf("%d found at index %d in the given array", element, i);
            found++;
            break;
        }       
    }
    if (found==0)
        printf("%d not found!!", element);
    
    return 0;
}