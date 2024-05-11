#include <stdio.h>

/**
 * main - prints the grade 
 * when score is assigned
 *
 * Return 0 Always
 */

int main (void) 
{
	/** Declare and initalize variables */
	int n = 0;

	/** Input score*/
	printf("Please input your score:");
	 scanf("%d", &n);

	/** Conditional statements*/
	if (n >= 80 && n <= 100) 
	{
		printf("Your score is %d and your grade is A\n", n);
	}

	else if (n >= 70 && n <= 79) 
	{
		printf("Your score is %d and your grade is B\n", n);
	}

	else if (n >= 60 && n <= 69) 
	{
		printf("Your score is %d and your grade is C\n", n);
	}

	else if(n >= 55 && n <= 59) 
	{
		printf("Your score is %d and your grade is D\n", n);
	}
 
	else if(n >= 50 && n <= 55) 
	{
		printf("Your score is %d and your grade is E\n", n);
	}

	else if(n <= 49) 
	{
		printf("Your score is %d and your grade is F\n", n);
	}

	else 
	{
		printf("Invalid score");
	}
  
	return (0);
}
