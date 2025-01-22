#include<stdio.h>


int factorial(int num)
{
    if (num>1)
        return num*factorial(num-1);
    return 1;
}
int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("%d", factorial(number));
    return 0;
}