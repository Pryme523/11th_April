#include <stdio.h>

/**
 * main - displays whether a candidate passed 
 * 		failed a test
 *
 * Return 0 Always
 */

int main (void)
{
	int math = 0;
	int physics = 0;
	/**Accept input from user */
	printf("Enter your maths score:");
	scanf("%d\n", &math);
	printf("Enter your physics score:");
	scanf("%d\n", &physics);

	/**Display canditate result*/
	if (math>=50 && physics>=60)
		printf("Result is fail\n");
	else 
		printf("Result is pass\n");

	return (0);
}
