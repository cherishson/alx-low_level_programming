#include "main.h"
/**
 * _strpbrk -a functionthat searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched
 *
 * Return: it a set if matched - a pointer to the matchedbyte
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
