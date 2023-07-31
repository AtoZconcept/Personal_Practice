#include <stdio.h>
int sum(void);

int main()
{
	int s;
	s = sum();
	if(s % 2 == 0)
		printf("Sum= %d and is even number", s);
	else
		printf("Sum= %d and is odd number", s);
}
int sum()
{
	int a, b, sum = 0;
	printf("Enter two numbers:");
	scanf("%d %d", &a,&b);
	sum = a + b;
	return sum;
}
