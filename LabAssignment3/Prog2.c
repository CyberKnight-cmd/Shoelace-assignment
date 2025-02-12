#include<stdio.h>

int main(){
    /*
    *****
     ****
      ***
       **
        *
    */

   int N = 0;
   printf("Enter a number: ");
   scanf("%d", &N);
   
   for (int i = 0; i < N; i++)
   {
    // For space
        for(int j = 0; j <= i; j++)
            printf(" ");
    // For stars
        for(int j = 0; j < N - i; j++)
            printf("*");
        printf("\n");
   }
   
    return 0;
}