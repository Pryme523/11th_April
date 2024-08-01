#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 */

int main (void)
{
	char a = 'a';

		while (a <= 'z')
		{
			if(a != 'e' && a != 'q')
			putchar(a);
			a++;
		}
		putchar('\n');
	return (0);
}
