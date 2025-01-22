#include<stdio.h>

int main(){
    int number = 0, numCopy = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number!=0)
    {
        numCopy = numCopy*10 + number%10;
        number /= 10;
    }
    printf("%d", numCopy);    
    return 0;
}