#include<stdio.h>

int main(){
    int i = 0;
    printf("Characters : ASCII Values\n");
    while (i<266)
        printf("%c\t:\t%d\n", i, i++);
    return 0;
}