#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, d;
    printf("Enter the four sides of the polygon seperated by \' \' : ");
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    double ac = sqrt(pow(a,2) + pow(c,2));
    double bd = sqrt(pow(b,2) + pow(d,2));
    if(a==c && b==d && ac==bd)
        printf("Polygon is a rectangle");
    else
        printf("Polygon is not a rectangle.");
    return 0;
}