#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);

    printf("Number after deleting the last two digits : ", number/100);
    return 0;
}