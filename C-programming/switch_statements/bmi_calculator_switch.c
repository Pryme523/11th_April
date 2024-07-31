#include <stdio.h>

/**
 * main - calculates the bmi of a patient
 * basing off the weight and height of the
 * patient
 * bmi = w / (h * h)
 * w - weight of patient
 * h - height of patient
 *
 * Return 0 Always
 */

int main (void)

{
	int w;
	int h;
	int bmi;

	printf("Enter your weight(kg): ");
	scanf("%i", &w);

	printf("Enter your height(m): ");
	scanf("%i", &h);
	bmi = w / (h * h);

	switch (bmi)
	{
	case 0 ... 17:
		printf("Your bmi is %i and you are underweight\n", bmi);
		break;

	case 18 ... 25:
		printf("Your bmi is %i and you are normal weight\n,", bmi);
		break;

	case 26 ... 29:
		printf("Your bmi is %i and you are overweight\n", bmi);
		break;

	case 30 ... 34:
		printf("Your bmi is %i and you have class I Obesity\n", bmi);
		break;

	case 35 ... 39:
		printf("Your bmi is %i and you have class II Obesity\n", bmi);
		break;

	case 40 ... 100:
		printf("Your bmi is %i and you have class I Obesity\n", bmi);
		break;
	default:
		printf("You weight or height input is incorrect");
	}
	return (0);
}
