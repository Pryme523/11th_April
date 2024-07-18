#include <stdio.h>

/**
 * main - calculates the bmi of a patient
 * w - weight of candidate
 * h - height of candidate
 * bmi - bmi of candidate
 *
 * Return 0 Always
 */

int main (void)
{
	int w = 0;
	int h = 0;
	int bmi = w/h*h;

	printf("Enter your weight:");
	scanf("%d\n", &w);
	printf("Enter your height:");
	scanf("%d\n", &h);

	if (bmi < 18)
	{
		printf("bmi is %d and you are Underweight\n",bmi);
	}
	else if (bmi >= 18 && bmi <= 25)
	{
		printf("bmi is %d and you are normal weight\n",bmi);
	}
	else
		printf("bmi is %d and you have Class III Obesity", bmi);
	return (0);
}
