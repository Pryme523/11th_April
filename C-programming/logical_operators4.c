#include <stdio.h>

/**
 * main - returns the state of a condition
 * when a logical operator is passed
 *
 * Return 0 Always
 */

int main (void)
{
	int m = 40, n = 20;
	int o = 20, p = 30;

	if (m > n && o != p)
		printf("&& operator: Both conditions are true\n");

	if (o < m || p == n)
		printf("|| operator: One of the conditions is true\n");

	if(!(m >= p && o == n))
		printf("Returns the positive state of the condition set\n");

	else
		printf("! operator: Negates the condition set");
	return 0;
}
