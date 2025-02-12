#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0, v = 65; j <= i; j++, v += 2)
            printf("%c", v);
        printf("\n");
    }
    return 0;
}