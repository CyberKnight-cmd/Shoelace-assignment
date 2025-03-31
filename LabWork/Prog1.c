#include<stdio.h>

int sumOfDigits(int num)
{
    if (num==0)
        return 0;
    else
        return (num%10 + sumOfDigits(num/10));
}
int main(){
    int variable = 0;
    printf("Enter a number: ");
    scanf("%d", &variable);
    
    
    printf("%d", sumOfDigits(variable));
    return 0;
}