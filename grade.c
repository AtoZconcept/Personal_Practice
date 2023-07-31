#include <stdio.h>
int main ()
{
	int a = 0;
	printf("Enter student score:");
	scanf("%d", &a);
	if(a >= 70)
		printf("The grade for score: %d is A", a);
	else if(a >= 60 && a < 70)
		printf("The grade for score: %d is B", a);
	else if(a >= 50 && a < 60)
                printf("The grade for score: %d is C", a);
	else if(a >= 45 && a < 50)
                printf("The grade for score: %i is D", a);
	else if(a >= 40 && a < 45)
                printf("The grade for score: %d is E", a);
	else
                printf("The grade for score: %d is F", a);
}
