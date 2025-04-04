#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter your str : ");
    fgets(str,sizeof(str), stdin);

    int left = 0, right = strlen(str) - 2;
    char temp;
    while (left<right)
    {
        temp = str[left];
        str[left++] = str[right];
        str[right--] = temp;
    }

    printf("Reversed string : %s", str);
}