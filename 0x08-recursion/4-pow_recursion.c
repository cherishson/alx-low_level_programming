#include "main.h"

/**
 * _poe_recursion - returns the value of x raised to the power of y
 * @x: theinteger
 * @y: the power
 * Return: returns the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (1);
}
