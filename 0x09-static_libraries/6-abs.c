#include <stdlib.h>
#include "main.h"

/**
 * _abs - a function that computes absolute value of integer
 * @n: the integer to be checked
 *
 * Return: returns the absolute value of integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	return (0);
}
