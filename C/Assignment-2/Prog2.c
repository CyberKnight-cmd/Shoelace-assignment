#include<stdio.h>
#include<math.h>
int main(){
    int x1, y1, x2, y2;
    printf("Enter x1 and y1 : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 and y2 : ");
    scanf("%d %d", &x2, &y2);
    
    float distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    printf("Distance : %f", distance);
    return 0;
}