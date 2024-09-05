#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lower case
 *
 * Return 0 Always
 */

int main (void)
{
	char a = 'a';
	char A = 'A';
		while(a <= 'z')
		{
			putchar(a);
			a++;
		}

		while (A <= 'Z')
		{
			putchar(A);
			A++;
		}
	return (0);
}
