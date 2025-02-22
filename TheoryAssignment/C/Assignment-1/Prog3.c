#include<stdio.h>

int main(){
    
    int length = 0, value = 1;
    printf("Enter the number of points : ");
    scanf("%d", &length);
    
    
    float x[length], y[length], m[length-1];
    for(int i = 0; i < length; i++){
        printf("Enter x & y of point %d : ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
        if (i>0)
            m[i-1] = (y[i] - y[i-1])/(x[i] - x[i-1]);        
    }

    for(int i = 1; i < length-1; i++){
        value*= (m[i]==m[i-1]) ? 1 : 0;
        if (value) break;
    }

    if(value)
        printf("Given points fall on a straight line");
    else
        printf("Given points do not fall on a straight line");
    return 0;
}