#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    int secondLastDigit = ((number/10)%10)*2;
    number = ((number/100)*10+secondLastDigit)*10+number%10;
    printf("%d", number);
    return 0;
}