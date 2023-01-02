#include "main.h"
/**
 * _strchr -a function that locates a character in string
 * @s: the string to be search
 * @c: the character to be located
 *
 * Return: if c is found - a pointerto the first occurrence
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
