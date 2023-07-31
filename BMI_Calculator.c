#include <stdio.h>
int main()
{
	int w,h,B;
	printf("BMI Checker\n");
	printf("Enter your height(m):");
	scanf("%d", &h);
	printf("Enter your weight(kg):");
	scanf("%d", &w);
	B = w / h * h;
	switch (B)
	{
	case 0 ... 17:
		printf("You are underweight\n");
		break;
	case 26 ... 29:
		printf("You are overweight\n");
		break;
	case 18 ... 25:
		printf("You have normal weight\n");
		break;
	case 30 ... 34:
		printf("You are class I obesity\n");
		break;
	case 35 ... 39:
		printf("You are class II obesity\n");
		break;
	case 40 ... 100:
		printf("You are class II obesity\n");
		break;
	default:
		printf("Enter Valid Weight and Height figure.\n");
		break;
	}
	return 0;
}
