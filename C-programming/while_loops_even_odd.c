#include <stdio.h>

/**
 * main - continues to execute and return 
 * even or odd state as long as number is
 * positive
 *
 * Return 0 Always
 */

int main (void)
{
	int a = 0;

	while (a >= 0)
	{
		(a % 2 == 0) ?
		printf("%d is Even\n", a) : printf("%d is odd\n", a);
		
		printf("Enter a positive number:");
		scanf("%d", &a);

	}
	printf("End of Loop");

	return (0);
}
