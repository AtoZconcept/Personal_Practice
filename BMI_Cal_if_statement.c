#include <stdio.h>

/*
 * main - This program calculate BMI and gove result
 * reurn - 0
 */

int main ()
{
	printf("Welcome to AtoZ BMI calculator\n");
	int w,h,b;
	printf("Enter your weight(kg):");
	scanf("%d",&w);
	printf("Enter your height(m):");
	scanf("%d",&h);
	b = w / h * h;
	printf("Your BMI result is: %d and ", b);
	if(b < 18)
		printf("you are underweight");
	else if(b > 17 && b < 25)
                printf("you have a normal weight");
	else if(b > 24 && b < 30)
                printf("you are weight");
	else if(b > 29 && b < 35)
                printf("you have class 1 obesity");
	else if(b > 34 && b < 40)
                printf("you have class 2 obesity");
	else
		printf("you have class 3 obesity");
	return 0;
}
