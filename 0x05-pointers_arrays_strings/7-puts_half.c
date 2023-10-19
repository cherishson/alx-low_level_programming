#include "main.h"


/**
 * puts_half - prints only half of a string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int b = 0;

	while (*(str + b) != '\0')
	{
		b++;
	}

		if (!(b % 2))
			b = b / 2;
		else
			b = (b + 1) / 2;
	while (*(str + b) != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
