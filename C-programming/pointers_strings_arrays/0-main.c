#include <stdio.h>

/**
 * main - prints size of a data type
 *
 */

int main(void)
{
	int n;

	printf("Size of type 'char' on my computer: %d bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %d bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %d bytes\n", sizeof(float));
	printf("Size of type of my variable on my computer: %d bytes\n", sizeof(n));

	return 0;
}
