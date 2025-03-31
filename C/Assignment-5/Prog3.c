#include<stdio.h>
#include<string.h>

int palindrome(char* str){
    int left = 0, right = strlen(str) - 2;
    while (left<right)
    {
        if (str[left++]!=str[right--])
            return 0;        
    }
    return 1;    
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    palindrome(str) ? printf("Palindrome!!") : printf("Not palindrome!!");    
    return 0;
}