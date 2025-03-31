#include<stdio.h>

int main(){
    int a, b;
    int *c = &a, *d = &b;
    printf("Enter the two numbers : ");
    scanf("%d %d", c, d);
    printf("%d", *c + *d);
    return 0;
}