#include<stdio.h>
#include<math.h>
int main(){
    // Calculate the area of a triangle using Heron's formula
    int a,b,c;
    printf("Enter a,b,c = ");
    scanf("%d %d %d", &a, &b, &c);
    float s = (a+b+c)/2.0;
    float result = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Result = %.2f", result);
    return 0;
}