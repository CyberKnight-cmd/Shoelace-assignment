#include<stdio.h>

int main(){
    printf("Enter your name : ");
    char* name;
    gets(name);
    printf("Name : %s\n", name);
    printf("%d", sizeof(name));
    return 0;
}