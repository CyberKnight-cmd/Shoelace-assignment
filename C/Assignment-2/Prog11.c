#include<stdio.h>

int isPrime(int num)
{
    for(int i = 2; i <= num/2; i++){
        if (num%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(int i = 2; i <= number; i++){
        if (isPrime(i))
            printf("%d, ", i);
    }
    return 0;
}