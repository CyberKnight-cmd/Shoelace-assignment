#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        // for spaces
        for(int j = 1; j < n-i; j++){
            printf(" ");
        }
        // for pattern
        for(int j = 1; j < i;j++){
            printf("%d", j);
        }
        for(int j = i+1; j > 0; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}