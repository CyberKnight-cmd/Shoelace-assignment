#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    printf("The number without last digit : ", number/10);
    return 0;
}