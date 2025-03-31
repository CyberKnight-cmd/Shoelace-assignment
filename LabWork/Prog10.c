#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i==0 || j==0 || j==n-1 || i==n-1)
                printf("1");
            else {
                if (i==j || i+j==n-1)
                    printf("0");
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}