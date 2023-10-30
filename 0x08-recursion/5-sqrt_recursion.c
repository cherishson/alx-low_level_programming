#include "main.h"

/**
 * sqrt_root - returns the natural square root of a number
 * @num: the integer whose square root is to be calculated
 * @root: the root to be tested
 * Return: the result of square root
 */

int sqrt_root(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (sqrt_root(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the integer whose square root is to be calculated
 * Return: the result of square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (sqrt_root(n, root));
}
