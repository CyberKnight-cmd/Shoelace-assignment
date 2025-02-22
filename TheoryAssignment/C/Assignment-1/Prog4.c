#include<stdio.h>

int main(){
    int Ram = 0, Shyam = 0, Ajay = 0;
    printf("Enter the ages or Ram Shyam and Ajay: ");
    scanf("%d %d %d", &Ram, &Shyam, &Ajay);
    
    if (Ram<Shyam && Ram<Ajay)
        printf("Ram is the youngest.");
    else if (Shyam<Ram && Shyam<Ajay)
        printf("Shyam is the youngest.");
    else
        printf("Ajay is the youngest");
    return 0;
}