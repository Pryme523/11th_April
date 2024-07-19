#include <stdio.h>

/**
 * main - calculates the w/(h*h)*h of a patient
 * w - bmit of candidate
 * h - height of candidate
 * w/(h*h)*h - w/(h*h)*h of candidate
 *
 * Return 0 Always
 */

int main (void)
{
	int w = 1;
	int h = 1;
	int bmi;

	printf("Enter your weight:");
	scanf("%d", &w);
	printf("Enter your height:");
	scanf("%d", &h);

	 bmi = w / (h * h);

	if (bmi < 18)
	{
		printf("bmi is %d and you are Underweight\n",bmi);
	}
	else if (bmi >= 18 && bmi <= 25)
	{
		printf("bmi is %d and you are normal weight\n",bmi);
	}
	else if (bmi >= 26 && bmi <= 29)
	{
		printf("bmi is %d and you are overweight\n",bmi);
	}
	else if (bmi >= 30 && bmi <= 34)
	{
		printf("bmi is %d and you have Class I obesity\n",bmi);
	}
	else if (bmi >=35 && bmi <= 39)
	{
		printf("bmi is %d and you have Class II Obesity\n",bmi);
	}
	else
	printf("bmi is %d and you have Class III Obesity",bmi);

	return (0);
}
