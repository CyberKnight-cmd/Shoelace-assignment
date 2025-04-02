#include<stdio.h>

int factorialRecursive(int a){
    if (a!=0 && a>0)
        return a*factorialRecursive(a-1);
    if (a<0)
        return a;
    else
        return 1;
}

int factorialLooped(int a){
    int product = 1;
    while (a!= 0)
        product *= a--;
    return product;    
}

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Loop result : %d\nRecursion result : %d", factorialLooped(num), factorialRecursive(num));
    return 0;
}