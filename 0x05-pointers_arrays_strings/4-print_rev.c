#include "main.h"

/**
 * print-rev - prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count ) != '\0')
	{
		count++;
	}
	while (count--)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
}
