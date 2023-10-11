#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: the charcater to be checked
 *
 * Return: 1 if charcater is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

