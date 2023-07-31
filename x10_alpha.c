#include <stdio.h>
int main()
{
	char alpha;
	int a;
	for (a = 0; a < 10; a++)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		putchar('\n');
	}
	return 0;
}
