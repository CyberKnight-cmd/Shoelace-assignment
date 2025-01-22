#include<stdio.h>

int main(){
    int number = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The second last digit is : %d", (number%100)/10);
    return 0;
}