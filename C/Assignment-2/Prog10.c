#include<stdio.h>


int fibo(int a, int b, int n)
{
    if (n<1)
        return a;
    else 
        return fibo(b, a+b, n-1);
}
int main(){
    int N = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        printf("%d, ", fibo(0,1,i));
    return 0;
}