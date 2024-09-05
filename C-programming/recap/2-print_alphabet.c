#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * 	followed by a new line
 *
 * Return 0 Always
 */

int main (void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
