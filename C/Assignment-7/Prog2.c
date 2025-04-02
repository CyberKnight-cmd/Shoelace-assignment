#include<stdio.h>


float power(int X, int Y){
    if (Y>0)
        return X*power(X, Y-1);
    if (Y<0)
        return (1/X)*power(X,Y+1);
    else
        return 1;
}
int main(){
    int x, y;
    printf("Enter the base and power : ");
    scanf("%d %d", &x, &y);

    printf("Result : %.3f", power(x,y));
    return 0;
}