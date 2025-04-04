#include<stdio.h>

void generateFibonacci(int lower, int upper)
{   
    int a = 0, b = 1, temp;
    while (a<upper)
    {
        if(a>=lower)
            printf("%d ", a);
        temp = b;
        b = a + b;
        a = temp;
    }
    
}

int main(){
    int lower = 0, upper = 0;
    printf("Enter the lower & upper range : ");
    scanf("%d %d", &lower, &upper);
    
    generateFibonacci(lower, upper);
    return 0;
}