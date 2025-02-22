#include<stdio.h>
#include<math.h>
int main(){
    int a = 0, b = 0;
    printf("Enter the base and the power : ");
    scanf("%d %d", &a, &b);
    
    printf("%.1lf", pow(a,b));
    return 0;
}