#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination to be copied to
 * @src: the string to be copied
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
