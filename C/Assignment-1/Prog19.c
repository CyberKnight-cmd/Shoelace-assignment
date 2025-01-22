#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    int lastDigit = number - (number/10)*10;
    int secondLastDigit = (number - (number/100)*100)/10;
    int thirdLastDigit = (number - (number/1000)*1000)/100;

    printf("%d", (((number/1000)*10 + lastDigit)*10 + secondLastDigit)*10 + thirdLastDigit);
    return 0;
}