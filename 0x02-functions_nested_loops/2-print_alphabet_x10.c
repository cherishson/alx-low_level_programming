#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	while (a++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	}
}
