#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    printf("Last Digit : ", number%10);
    printf("New number : ", number/10);
    return 0;
}