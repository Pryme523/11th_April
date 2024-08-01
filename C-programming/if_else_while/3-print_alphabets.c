#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * and then in uppercase
 * followed by a newline
 *
 * Return 0 Always
 */

int main (void)
{
	char a = 'a', A = 'A';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	while(A <= 'Z')
	{
		putchar(A);
		A++;
	}
	return (0);
}
