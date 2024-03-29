#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination to be copied to
 * @src: the string to be copied
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}

