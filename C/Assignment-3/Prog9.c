#include<stdio.h>

int main(){
    int n = 0, value = 65;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", value + j);
        }
        value += 1;
        printf("\n");
    }
    return 0;
}