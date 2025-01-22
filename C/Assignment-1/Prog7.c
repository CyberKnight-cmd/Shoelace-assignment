#include<stdio.h>

int main(){
    int number = 0, sum = 0, lastDigit = 0, secondLastDigit = 0;
	scanf("%d", &number);
	lastDigit = number%10;
	secondLastDigit = (number%100)/10;
	sum = lastDigit + secondLastDigit;
	printf("Sum : %d", sum);
    return 0;
}

/*
#include <stdio.h>

int main()
{
	int X;
	printf("Enter X (6,7,12) : ");
	scanf("%d", &X);
	switch(X)
	{
		case 6:
			printf("Y = %d", X+ 10);
			break;
		case 7:
			printf("Y = %d", X*X);
			break;
		case 12:
			printf("Y = %d", (2*X)+4);
			break;
		default:
			printf("Y = %d", (X*6)-1);
			break;
	}
	return 0;
}
*/