#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: the size of the array
 * @size: the size of bytes
 *
 * Return: a pointer to the first block of memory on success, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int index;
	char *cher;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	cher = ptr;

	for (index = 0; index < (nmemb * size); index++)
		cher[index] = '\0';

	return (ptr);
}
