#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    int numCopy = num, count = 0;
    
    // Counting number of digits
    while (numCopy != 0) {
        count++;
        numCopy /= 10;
    }
    
    // Calculating Armstrong sum
    int sum = 0;
    numCopy = num;
    while (numCopy != 0) {
        int digit = numCopy % 10;
        sum += power(digit, count);
        numCopy /= 10;
    }

    if (sum == num)
        printf("Armstrong number!\n");
    else
        printf("Not an Armstrong number.\n");

    return 0;
}
