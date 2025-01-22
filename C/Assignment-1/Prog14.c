#include<stdio.h>

int main(){
    int number1, number2;
    scanf("%d, %d", &number1, &number2);
    int number3 = (number1/10)*10 + number2%10, number4 = (number2/10)*10 + number1%10;
    printf("%d\n%d", number3, number4);
    return 0;
}