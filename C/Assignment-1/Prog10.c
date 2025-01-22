#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    number = (number/100)*10 + number%10;
    printf("%d", number);
    return 0;
}