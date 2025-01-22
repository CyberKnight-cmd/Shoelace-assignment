#include<stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int rev = 0, numCopy = number;
    while (numCopy)
    {
        rev = rev*10 + numCopy%10;
        numCopy/= 10;
    }    
    if (rev==number)
        printf("%d is palindrome.", number);

    else
        printf("%d is not palindrome.", number);

    return 0;
}