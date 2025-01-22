#include<stdio.h>

int main(){
    // Without using mod

    int number = 0;
    scanf("%d", &number);

    printf("%d", number - (number/10)*10);
    return 0;
}