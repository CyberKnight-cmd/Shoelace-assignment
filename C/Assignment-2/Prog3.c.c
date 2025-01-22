#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b,&c);
    if(a * a == b * b + c * c)
        printf("Angle A is 90");
    else
        printf("Angle A is not 90");
    return 0;
}