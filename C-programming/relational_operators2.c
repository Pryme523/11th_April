#include <stdio.h>
/**
 * main - compares two operands
 * a - Operand 1
 * b - Operand 2
 *
 * Return 0 Always
 */

int main (void)
{
	int a = 21;
	int b = 10;
	
	printf("a is %d and b is %d\n",a,b);
	if (a == b)
	{
		printf("Line 1 - a = b\n");
	}
	else 
		printf("Line 1 - a is not equal to b\n");

	if (a < b)
	{
		printf("Line 2 - a is less than b\n");
	}
	else 
		printf("Line 2 - a is not less than b\n");

	if (a > b)
	{
		printf("Line 3 - a is greater than b\n");
	}
	else 
		printf("Line 3 - a is not greater than b\n");


/*Initalizing values of a and b to 5 and 20 respectfully*/

	a = 5;
	b = 20;
	
	printf("a is %d and b is %d\n",a,b);
	if (a>=b)
	{
		printf("Line 4 - a is greater than or equal to b\n");
	}
	else
		printf("Line 4 - a is not greater than or equal to b\n");

	if (a<=b)
	{
		printf("Line 5 - a is less than or equal to b\n");
	}
	else
		printf("Line 5 - a is not less than or equal to b\n");

	if (a!=b)
	{
		printf("Line 6 - a is not equal to b\n");
	}
	else 
		printf("Line 6 - a is equal to b\n");

	return (0);
}
