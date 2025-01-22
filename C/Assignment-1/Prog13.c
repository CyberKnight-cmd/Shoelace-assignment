#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    
    int product = (number/10)*((number/100)*10 + number%10);
    printf("%d", product);
    return 0;
}