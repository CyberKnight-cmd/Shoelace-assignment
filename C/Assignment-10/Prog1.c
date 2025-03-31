#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file.txt", "r");
    int num = 0;
    fscanf(fp, "%d", &num);
    printf("%d", num);
    return 0;
}