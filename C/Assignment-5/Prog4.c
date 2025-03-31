#include<stdio.h>


int length(char *str){
    int i = 0;
    for(;str[i]!='\n' && str[i]!= '\0'; i++);
    return i;
}
int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin);

    printf("%d\n", length(str));
    return 0;
}