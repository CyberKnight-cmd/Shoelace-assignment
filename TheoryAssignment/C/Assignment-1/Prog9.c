#include<stdio.h>
#include<math.h>
int main(){
    float principal [10], rate[10], time[10], times[10], amount[10];
    printf("\tPrincipal, Rate, Time, N times\n");
    for(int i = 0; i < 10; i++){
        printf("Set-%d : ", i+1);
        scanf("%f %f %f %f", &principal[i], &rate[i], &time[i], &times[i]);
        amount[i] = principal[i]*pow((1 + rate[i]/times[i]), time[i]*times[i]);        
        printf("Amount : %.2f\n", amount[i]);
    }
    printf("\n\tPrincipal, Rate, Time, N times\n");
    for(int i = 0; i < 10; i++){
        printf("Set-%d : %.1f, %.1f, %.1f, %.1f, %.1f\n", i+1, principal[i], rate[i], time[i], times[i], amount[i]);
    }
    
    return 0;
}