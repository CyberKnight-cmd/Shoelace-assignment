#include<stdio.h>

int factorial(int a){
    int product = 1;
    while (a!= 0)
        product *= a--;
    return product;    
}

int isPeterson(int num){
    int numCopy = num, sum = 0;
    while (numCopy!=0){
        sum += factorial(numCopy%10);
        numCopy /= 10;
    }
    return (num==sum) ? 1 : 0;
}
int main(){
    int num = 0;
    scanf("%d", &num);

    if (isPeterson(num))
        printf("%d is a Peterson's number.", num);
    else
        printf("%d is not a Peterson's number.", num);
    return 0;
}