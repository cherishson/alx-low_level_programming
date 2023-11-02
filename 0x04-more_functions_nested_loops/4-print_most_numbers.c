#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int b = '0';

	for (; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}

