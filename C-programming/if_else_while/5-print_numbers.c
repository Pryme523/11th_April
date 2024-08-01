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
		printf("%u", a);
		a++;
	}
	printf("\n");
	return (0);
}
