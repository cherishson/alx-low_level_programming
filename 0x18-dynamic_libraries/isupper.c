#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: the characters to check
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
