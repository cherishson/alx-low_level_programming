#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int space;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (space = 0; space < size; space++)
	{
		arr[space] = c;
	}
	return (arr);
}
