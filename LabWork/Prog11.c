#include<stdio.h>
#include<math.h>
int main(){
    float a = 0, b = 0, c = 0;
    printf("Enter a number: ");
    scanf("%f %f %f", &a, &b, &c);

    float d = b*b - 4*a*c;
    if(d>0)
        printf("The roots are : %f, %f", (- b + sqrt(d) )/2*a, (-b -sqrt(d))/2*a);
    else if (d==0.0)
        printf("The roots are %f, %f", (-b)/2*a);
    else
        printf("The roots are %f + (%f)i, %f - (%f)i");
    return 0;
}