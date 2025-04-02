#include<stdio.h>
int add(int a, int b, int c){
    return a + b + c;
}
int main(){
    int a, b, c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Result : %d", add(a,b,c));
    return 0;
}