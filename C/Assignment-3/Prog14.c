#include<stdio.h>

int factorial(int num) {
    if (num<2)
        return 1;
    else
        return factorial(num-1)*num;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        
        // Print Pascal’s Triangle numbers
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        
        printf("\n");
    }
    
    return 0;
}