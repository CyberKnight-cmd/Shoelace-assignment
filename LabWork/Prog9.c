#include<stdio.h>
#include<string.h>
int main(){
    char str[40], str1[20], str2[20];
    printf("Enter the string : ");
    gets(str);
    gets(str2);
    str = strcat(str1,str2);
    return 0;
}