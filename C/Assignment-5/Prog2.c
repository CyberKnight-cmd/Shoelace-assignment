#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("Enter your name : ");
    fgets(name,sizeof(name), stdin);

    int left = 0, right = strlen(name) - 2;
    char temp;
    while (left<right)
    {
        temp = name[left];
        name[left++] = name[right];
        name[right--] = temp;
    }

    printf("Reversed string : %s", name);
}