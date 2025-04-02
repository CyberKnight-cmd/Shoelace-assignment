#include <stdio.h>

// Function to find GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);
    
    // Output the results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_result);
    
    return 0;
}
