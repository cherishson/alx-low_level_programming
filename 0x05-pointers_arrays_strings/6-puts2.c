#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the character to be printed
 */

void puts2(char *str)
{
	int a;

	for (a = 0; (*(str + a) != '\0'); a++)
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
	}
	_putchar('\n');
}
