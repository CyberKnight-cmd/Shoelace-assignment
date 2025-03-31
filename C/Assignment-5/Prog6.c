#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    char concatenate[strlen(str1) + strlen(str2) - 2];
    for(int i = 0, j = 0;i+j!=strlen(concatenate); i++, j++){
        if (i<strlen(str1) - 1)
            concatenate[i] = str1[i];
        if (j<strlen(str2) - 1)
            concatenate[strlen(str1) + j] = str2[j];
    }
    printf("%s", concatenate);
    return 0;
}

