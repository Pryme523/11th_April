#include <stdio.h>

int english_score = 0;
int math_score = 0;
int sum(int, int);
int avg(int, int);

int main(void)
{
	sum(87,94);
	avg(87,94);

	return (0);
}

int sum(int english_score, int math_score)
{

	printf("%d\n", english_score + math_score);

	return (0);
}

int avg(int sum, int number_of_subjects)
{
	printf("%d\n", (sum(english_score, math_score)) / 2);

	return (0);
}
