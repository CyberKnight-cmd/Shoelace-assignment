#include<stdio.h>

int main(){
    int element = 0;
    printf("Enter a number: ");
    scanf("%d", &element);
    
    for(int i = 0; i < element; i++){
        for(int j = 0; j < element-i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}