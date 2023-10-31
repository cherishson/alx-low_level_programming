#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: the original string to be duplicated
 * Return: a pointer to the duplicated string on success, otherwise NULL
 */

char *_strdup(char *str)
{
	char *copy;
	int index = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);
	for (; str[index]; index++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];
	copy[length] = '\0';

	return (copy);
}


