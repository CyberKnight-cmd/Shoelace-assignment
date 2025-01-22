#include<stdio.h>

int main(){
    int X = 0, Y = 0;
    printf("Enter a number: ");
    scanf("%d", &X);
    
    switch (X)
    {
    case 6:
        Y = X + 10;
        break;
    case 7:
        Y = X*X;
        break;
    case 12:
        Y = 2*X + 4;
    default:
        Y = X*6 - 1;
        break;
    }
    return 0;
}