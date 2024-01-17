#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s:a pointer to the string
 * @c: the string character to be located
 * Return: a pointer to the located character or NULL if not located
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
