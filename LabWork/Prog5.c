#include<stdio.h>


int average(int a[])
{
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &sum);
    
    for(int i = 0; i < 5; i++){
        sum = sum + a[i];
    }

    float avg = sum/5;
    return avg;

}
int main(){
    int arr[5] = {10,20,30,40,50};
    float result = average(arr);
    printf("%.2f", result);
    return 0;
}