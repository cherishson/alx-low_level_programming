#include "main.h"

/**
 * _puts - prints a string, followed by newline
 * @s: the string to be printed
 */

void _puts(char *s)
{
	while (*s)
	_putchar(*s++);
	_putchar('\n');
}
