#include "main.h"

int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		j = i * -1;

		_putchar(j + '0');
		return (j % 10);
	}
	else
	{
		_putchar(i + '0');
		return (i % 10);
	}
}
