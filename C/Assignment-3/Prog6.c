#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // For spaces
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        // For stars
        for(int j = 0; j < n*2 - i*2; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}