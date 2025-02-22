#include<stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("The absolute value is : ");
    number<0 ? printf("%d", number*-1) : printf("%d", number);
    return 0;
}