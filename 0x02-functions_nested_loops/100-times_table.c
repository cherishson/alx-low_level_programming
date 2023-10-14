#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table
 * @n: the value to be printed
 */
void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)

			mult = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (mult < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mult);
			}
			else if (mult > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + mult / 100);
				_putchar('0' + ((mult / 10) % 10));
				_putchar('0' + (mult % 10));
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
		}
		_putchar('\n');
	}
}
