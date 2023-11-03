#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string whose length is to be returned
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
