#include<stdio.h>

int main(){
    int a,b, choice;
    float result;
    printf("Enter the two numbers : ");
    scanf("%d, %d", &a, &b);

    printf("Enter 1 for \'+\'\n2 for \'-\'\n3 for \'*\'\n4 for \'/\'\n\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = a+b;
        break;
    case 2:
        result = a>b? a-b : b-a;
        break;
    case 3:
        result = a*b;  
        break;
    case 4:
        result = a/b;
        break;
    default:
        printf("Wrong choice");
        break;
    }

    printf("Result = %f", result);
    return 0;
}