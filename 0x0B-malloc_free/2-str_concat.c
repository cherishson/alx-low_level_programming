#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the concatenated string, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	int index = 0, length = 0, cat_index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[index] || s2[index]; index++)
		length++;

	cat_str = malloc(sizeof(char) * length);

	if (cat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		cat_str[cat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		cat_str[cat_index++] = s2[index];

	return (cat_str);
}
