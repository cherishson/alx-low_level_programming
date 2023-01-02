#include "main.h"

/**
* _menset - fill a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: The desired value
* @n: The number of bytes to be changed
*
* Return: A pointer to the filled memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
