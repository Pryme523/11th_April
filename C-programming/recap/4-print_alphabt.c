#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except the letters e and q
 *
*/

int main (void)
{
	char a = 'a';

		while (a <= 'z')
		{
		if (a != 'e' && a != 'q')
		putchar(a);
		a++;
		}

	return (0);
}
