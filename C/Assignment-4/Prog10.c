#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr[length];
    for(int i = 0; i < length; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int pos = 0;
    printf("Enter the splitting index : ");
    scanf("%d", &pos);
    
    int arr1[pos+1], arr2[length-pos-1];
    for(int i = 0, j = 0; i < length; i++){
        if(i<=pos)
            arr1[i] = arr[i];
        else
            arr2[j++] = arr[i];

    }
    printf("Original Array-1 Array-2\n");
    for(int i = 0, j = 0, k = 0; i < length; i++,j++,k++){
        printf("%d", arr[i]);
        (j<pos+1) ? printf("\t%d",arr1[j]) : printf("\t");
        (k<length-pos-1) ? printf("\t%d\n",arr2[k]) : printf("\n");
    }
    return 0;
}