#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file2.txt", "w");   
    
    int num = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    fprintf(fp, "%d", num);
    return 0;
}