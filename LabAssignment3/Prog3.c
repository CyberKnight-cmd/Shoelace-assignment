#include<stdio.h>

int isPrime(int num, int startingFactor)
{
    if (startingFactor>num/2)
    {
        if (num%startingFactor==0)
            return 0;
        return 1;
    }
}
int main(){
    
    return 0;
}