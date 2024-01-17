#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer to the string to be searched
 * @accept: the string with set of characters to be considered for the span
 * Return: the length of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, count, checker;

	a = 0;
	count = 0;
	while (s[a] != '\0')
	{
		b = 0;
		checker = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				count++;
				checker = 1;
				break;
			}
			b++;
		}

		if (checker == 0)
			return (count);
		a++;
	}
	return (count);
}
