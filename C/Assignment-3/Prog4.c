#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
            // for (int j = 1; j <= n + i; j++)
            // {
            //     if (j%(n-i-1)==0)
            //         printf("*");
            //     else
            //         printf(" ");
            // }
        // For spaces
        for(int j = 0; j < n - i; j++){
            printf(" ");
        }
        // For stars
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}