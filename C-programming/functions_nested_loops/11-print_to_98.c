#include "main.h"
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		/**  for single numbers */
		if (n <= 9)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}

		/** for double digit numbers*/
		else 
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');

			/** last digit without a comma*/
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');	
}
