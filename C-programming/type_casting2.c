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

	int op1 = 10;
	int op2 = 3;

	printf("Operand 1 is %d and Operand 2 is %d\n", op1,op2);
	printf("Addition of Operand 1 and Operand 2 is: %d\n", op1+op2);
	printf("Subtraction of Operand 1 and Operand 2 is: %d\n", op1-op2);
	printf("Multiplication of Operand 1 and Operand 2 is: %d\n", op1*op2);
	printf("Division of Operand 1 and Operand 2 is: %f\n", (float)op1/op2);
	printf("Modulo of Operand 1 and Operand 2 is: %d\n", op1%op2);

	return (0);

}
