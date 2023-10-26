#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number whose factorial is to be returned
 *
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
