#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* copy(char* str)
{
    char *strCopy = (char*)malloc((strlen(str) + 1) * sizeof(char));
    for(int i = 0; i < strlen(str); i++)
        strCopy[i] = str[i];
    strCopy[strlen(str)] = '\0';
    return strCopy;
}

int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    printf("Original String : %s", str);
    char *strCopy = copy(str);
    printf("Copied String : %s\n", strCopy);
}