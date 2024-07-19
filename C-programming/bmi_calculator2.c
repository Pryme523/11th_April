#include <stdio.h>

/**
 * main - calculates the BMI of a patient
 * w - weight of candidate
 * h - height of candidate
 * w/(h*h) - BMI of candidate
 *
 * Return: 0 Always
 */

int main(void)
{
    float w;
    float h;
    float bmi;

    printf("Enter your weight (kg): ");
    scanf("%f", &w);
    printf("Enter your height (m): ");
    scanf("%f", &h);

    if (h == 0) {
        printf("Height cannot be zero.\n");
        return 1;
    }

    bmi = w / (h * h);

    if (bmi < 18.5) {
        printf("BMI is %.2f and you are Underweight\n", bmi);
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("BMI is %.2f and you are Normal weight\n", bmi);
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("BMI is %.2f and you are Overweight\n", bmi);
    } else if (bmi >= 30 && bmi <= 34.9) {
        printf("BMI is %.2f and you have Class I Obesity\n", bmi);
    } else if (bmi >= 35 && bmi <= 39.9) {
        printf("BMI is %.2f and you have Class II Obesity\n", bmi);
    } else {
        printf("BMI is %.2f and you have Class III Obesity\n", bmi);
    }

    return 0;
}
