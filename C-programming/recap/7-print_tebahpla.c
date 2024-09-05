#include <stdio.h>

/**
 * main - prints the lowercase alphabet 
 * in reverse followed by a newline
 *
 *Return 0 Always
*/

int main (void)
{
	char a = 'z';

		while (a <= 'z')
		{
			if (a >= 'a')
			putchar(a);
			a--;
		}
		putchar('\n');
	return (0);
}
