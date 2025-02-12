#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int value = 65;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            printf("%c", value + j);
        }
        value += 2;
        printf("\n");
    }
    return 0;
}