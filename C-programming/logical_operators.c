#include <stdio.h>

/**
 * main - displays whether a candidate passed 
 * 		failed a test
 *
 * Return 0 Always
 */

int main (void)
{
	int math = 60;
	int physics = 50;

	if (math>=50 && physics>=60)
		printf("Result is fail\n");
	else 
		printf("Result is pass\n");

	return (0);
}
