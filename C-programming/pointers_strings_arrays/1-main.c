#include <stdio.h>

/**
 * main - prints the address of a variable
 *
 */

int main(void)
{
	int n;
	char c;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
}
