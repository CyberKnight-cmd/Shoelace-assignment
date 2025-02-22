#include<stdio.h>
int main(){
    int a = 0, b = 0, c = 0;
    printf("Enter a number: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a+b>c && a+c>b && b+c>a)
    {
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Right angled Triangle\n");
        if (a==b || b==c || c==a)
            printf("Isosceles Triangle\n");
        if (a==b && b==c && c==a)
            printf("Equilateral Triangle\n");
        if (a!=b && b!=c && c!=a)
            printf("Scalene Triangle.");
               
    }
    else
        printf("Triangle not possible.");
        
    return 0;
}