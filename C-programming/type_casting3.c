#include <stdio.h>
/**
 * main - performs basic arithmetric 
 * operations on two operands
 * op1 - operand 1
 * op2 - operand 2
 *
 * Return 0 Always
 */

int main (void)
{

	float op1 = 10;
	float op2 = 2.5;

	printf("Operand 1 is %f and Operand 2 is %f\n", op1,op2);
	printf("Addition of Operand 1 and Operand 2 is: %f\n", op1+op2);
	printf("Subtraction of Operand 1 and Operand 2 is: %f\n", op1-op2);
	printf("Multiplication of Operand 1 and Operand 2 is: %f\n", op1*op2);
	printf("Division of Operand 1 and Operand 2 is: %f\n", op1/op2);

	return (0);

}
