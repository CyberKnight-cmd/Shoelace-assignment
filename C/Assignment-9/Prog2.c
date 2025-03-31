#include<stdio.h>

int main(){
    int a, b;
    int *c = &a, *d = &b;
    printf("Enter the two numbers : ");
    scanf("%d %d", c, d);

    *c += *d;
    *d = *c - *d;
    *c -= *d;
    printf("%d %d", *c, *d);
    return 0;
}