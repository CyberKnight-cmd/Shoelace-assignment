#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    int lastDigit = number%10;
    number = ((number/10)*10+lastDigit*2);
    printf("%d", number);
    return 0;
}