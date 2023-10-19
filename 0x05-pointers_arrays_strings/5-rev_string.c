#include "main.h"

/**
 *  rev_string - reverse a string
 *  @s: the string to be reversed
 */

void rev_string(char *s)
{
	int start, end, temp;

	end = 0;

	while (*(s + end) != '\0')
	{
		end++;
	}

	end = end - 1;

	start = 0;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
