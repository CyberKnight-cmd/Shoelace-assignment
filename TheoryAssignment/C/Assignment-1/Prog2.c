#include<stdio.h>

int main(){
    int CP = 0, SP = 0;
    printf("Enter the CP and SP : ");
    scanf("%d %d", &CP, &SP);

    if (SP>CP)
        printf("Profit : %d", SP - CP);
    else if (CP>SP)
        printf("Loss : %d", CP - SP);
    else
        printf("Profit : 0\nLoss : 0");
    return 0;
}