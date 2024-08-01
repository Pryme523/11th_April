#include <stdio.h>

/**
 * main - prints all single digit numbers of 
 * base 10 starting from 0
 *
 * Return 0 Always
 */

int main (void)
{
	unsigned int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
		if (a < 10)
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
