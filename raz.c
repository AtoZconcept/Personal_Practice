#include <stdio.h>

int main()
{
        int c;
        for (c = 'z'; c >= 'a'; c--)
		printf("%c", c);
                /*putchar(c);*/
        for (c = 'Z'; c >= 'A'; c--)
                putchar(c);
	putchar('\n');
        return 0;
}
