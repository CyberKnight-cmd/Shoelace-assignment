#include<stdio.h>

int main(){
    int number = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number)
    {
        sum+=number%10;
        number/=10;
    }
    printf("%d", sum);
    return 0;
}