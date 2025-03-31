#include<stdio.h>

int main(){
    int len1 = 0, len2 = 0;
    printf("Enter the lengths of the two array : ");
    scanf("%d %d", &len1, &len2);
    
    int arr1[len1], arr2[len2], arr[len1 + len2];
    for(int i = 0; i < len1+len2; i++){
        if (i<len1){
            printf("Array 1, Element %d : ", i + 1);
            scanf("%d", &arr1[i]);
            arr[i] = arr1[i];
        }
        else{
            printf("Array 2, Element %d : ", i - len1 + 1);
            scanf("%d", &arr2[i - len1]);
            arr[i] = arr2[i - len1];
        }
    }

    printf("The merged elements are : ");
    for(int i = 0; i < len1+len2; i++)
        printf("%d ", arr[i]);
    
    return 0;
}