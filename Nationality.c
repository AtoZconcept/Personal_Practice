#include <stdio.h>

int main()
{
	int n;
	printf("Input Country Code number:\n");
	scanf("%d", &n);
	switch (n)
	{
		case 10:
		printf("Your Natinality is Ghana");
		break;
		case 20:
		printf("Your Natinality is Nigeria");
		break;
		default:
		printf("Your Natinality in unknown");
	}
}
