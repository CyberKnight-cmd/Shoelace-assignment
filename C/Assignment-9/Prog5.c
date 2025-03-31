#include<stdio.h>

int factorial(int *a){
    if (*a>1){
        int temp = *a - 1;
        return (*a) * factorial(&temp);
    }
    else
        return 1;
}

int main(){
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    a = factorial(&a);
    printf("Factorial : %d", a);
    return 0;
}