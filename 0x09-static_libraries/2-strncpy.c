#include "main.h"

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that will be concatenated to @des.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
