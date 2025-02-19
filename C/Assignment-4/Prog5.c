#include<stdio.h>

int main(){
    int length = 0;
    printf("Enter a number: ");
    scanf("%d", &length);
    
    int arr1[length][length], arr2[length][length], product[length][length], add[length][length], sum = 0;

    printf("Enter Array 1 : \n");
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            printf("(%d,%d) : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter Array 2 : \n");
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            printf("(%d,%d) : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < length; i++){
        sum = 0;
        for(int j = 0; j < length; j++){
            add[i][j] = arr1[i][j] + arr2[i][j];
            for(int k = 0; k < length; k++){
                sum += arr1[i][k]*arr2[k][j];
            }
            product[i][j] = sum;
        }
    }

    printf("The sum is : \n");
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    printf("The product is : \n");
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}