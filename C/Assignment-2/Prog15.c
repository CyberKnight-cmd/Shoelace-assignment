#include<stdio.h>

int main(){
    int X = 0, Y = 0, Z = 0;
    printf("Enter a number: ");
    scanf("%d %d %d", &X, &Y, &Z);
    
    switch (X)
    {
    case 0:
        printf("%d", Y+Z);
        break;
    case 1:
        printf("%d", Y-Z);
        break;
    case 2:
        printf("%d", Y*Z);
        break;
    case 3:
        printf("%d", Y/Z);
        break;
    default:
        break;
    }
    return 0;
}