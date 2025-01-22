#include<stdio.h>

int main(){
    float income = 0.0, incomeTax = 0.0;
    printf("Enter your income : ");
    scanf("%f", &income);
    
    if (income>=5000 && income<6000)
        incomeTax = (income-5000)*0.1;
    else if(income>=6000 && income<15000)
        incomeTax = (100 + (income-6000)*0.2);
    else
        incomeTax = 1900 + (income-15000);
    
    printf("Income Tax : %.2f", incomeTax);
    return 0;
}