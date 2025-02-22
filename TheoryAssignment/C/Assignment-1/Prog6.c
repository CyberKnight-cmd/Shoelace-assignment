#include<stdio.h>

int main(){
    char input = ' ';
    printf("Enter a character : ");
    scanf("%c", &input);
    
    int n = input;
    if (n>=65 && n<=90)
        printf("%c is an uppercase character.", input);
    else if (n>=97 && n<=122)
        printf("%c is a lowercase character.", input);
    else if (n>=48 && n<=57)
        printf("%c is an digit", input);
    else
        printf("%c is a special symbol.", input);
    return 0;
}