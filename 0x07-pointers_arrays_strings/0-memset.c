#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the memory address
 * @b: the byte to fill the memory with
 * @n: the size of the memory
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
