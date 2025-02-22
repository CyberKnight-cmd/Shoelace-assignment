#include<stdio.h>

    int main(){
        int length = 0;
        printf("Enter a number: ");
        scanf("%d", &length);
        
        int arr[length], max = 0;
        for(int i = 0; i < length; i++){
            printf("Enter element %d : ", i+1);
            scanf("%d", &arr[i]);
        }
        printf("Array before sorting : ");
        for(int i = 0; i < length; i++)
            printf("%d ", arr[i]);

        printf("\nArray after sorting : ");
        for(int i = 0; i < length-1; i++){
            max = i;
            for(int j = i+1; j < length; j++){
                if (arr[max]<arr[j])
                    max = j;
            }
            if(max!=i){
                arr[max] += arr[i];
                arr[i] = arr[max] - arr[i];
                arr[max] -= arr[i];
            }
            printf("%d ", arr[i]);
        }
        printf("%d", arr[length-1]);
    return 0;
}