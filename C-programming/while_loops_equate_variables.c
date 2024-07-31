#include <stdio.h>

/**
 * main - equates two variables
 *
 * Return 0 Always
 */

int main (void)
{
	int a = 0;
	int b = 10;

	while (a != b)
	{
		printf("a:%d, b:%d\n", a,b);
		a++;
		b--;
	}
	printf("End of Loop");
	return (0);
}
