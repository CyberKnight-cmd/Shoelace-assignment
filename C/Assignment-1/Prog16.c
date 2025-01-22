#include<stdio.h>

int main(){
    // Without mod

    int number = 0;
    scanf("%d", &number);
    int secondLastDigits = number - (number/100)*100;
    int secondLastDigit = secondLastDigits/10;
    printf("%d", secondLastDigit);
    return 0;
}