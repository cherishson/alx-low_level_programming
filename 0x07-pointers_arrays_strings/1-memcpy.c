#include "main.h"

/**
 * _memcpy - copies bytes from memory location
 * @dest: the destination memory location
 * @src: the source memory location
 * @n: the size of memory to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
