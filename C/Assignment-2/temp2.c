#include<stdio.h>
#include<math.h>
int main(){
    float x = 0;
    scanf("%f", &x);
    x = (180*x)/3.142;

    printf("sin(x) = %lf\ncos(x) = %lf\ntan(x) = %lf\nlog(x) = %lf", sin(x), cos(x), tan(x), log(x));
    return 0;
}