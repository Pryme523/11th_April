#include <stdio.h>

/**
 * main - performs basic arithmetric operations 
 * 		on given numbers
 *
 * Return 0 Always
 */

int main (void) 

{
	/** Variable declaration and initialization*/
	int a = 5;
	int b = 48;

	printf("Operand 1: %d, Operand 2: %d\n", a, b);
	printf("Addition of Operand 1 and Operand 2: %d\n", a + b);
	printf("Multiplication of Operand 1 and Operand 2: %d\n", a * b);
	printf("Subtraction of Operand 1 and Operand 2: %d\n", a - b);
	printf("Division of Operand 1 and Operand 2: %f\n", (float)(b/a));


	return (0);
}
