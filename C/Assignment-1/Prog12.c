#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    number = (((number/1000)*10 + number%10)*10+(number%100)/10)*10 + (number%1000)/100;
    printf("%d", number);
    return 0;
}