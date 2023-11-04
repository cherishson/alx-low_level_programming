#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the integer to allocate memory to
 *
 * Return: a pointer to the allocated memory on success
 */

void *malloc_checked(unsigned int b)
{
	void *bright;

	bright = malloc(b);

	if (bright == NULL)
	{
		exit (98);
	}
	return (bright);
}
