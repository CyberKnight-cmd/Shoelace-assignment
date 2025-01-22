#include<stdio.h>
#include<math.h>
int main(){
    int X = 0;
    double Z = 0;
    scanf("%d", &X);
    switch (X)
    {
    case 0:

    case 1:
    
    case 2:
        Z = (X+1)/4.0;
        break;
    
    case 3:
        Z = (pow(X,2) + 5)/4.0;
        break;
    case 4:
        Z = 3*X;
        break;
    default:
        Z = 1;
        break;
    }

    printf("%lf", Z);
    return 0;
}