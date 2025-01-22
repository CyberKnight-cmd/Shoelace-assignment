#include<stdio.h>

int main(){
    int marks = 0;
    scanf("%d", &marks);
    
    if (marks>=90 && marks<=100)
    {
        printf("Grade : Ex");
    }
    else if (marks>=80 && marks<90)
    {
        printf("Grade : A");
    }else if (marks>=70 && marks<80)
    {
        printf("Grade : B");
    }else if (marks>=60 && marks<70)
    {
        printf("Grade : C");
    }else if (marks>=50 && marks<60)
    {
        printf("Grade : D");
    }else if (marks>=35 && marks<50)
    {
        printf("Grade : P");
    }else if (marks<35)
    {
        printf("Grade : F");
    }
    else
        printf("Invalid");
    return 0;
}