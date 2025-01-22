#include<stdio.h>

int main(){
    // Without mod

    int number = 0;
    scanf("%d", &number);

    int lastDigit = number - (number/10)*10;
    int secondLastDigit = (number - (number/100)*100)/10;

    printf("%d", ((number/100)*10 + lastDigit)*10 + secondLastDigit);
    return 0;
}