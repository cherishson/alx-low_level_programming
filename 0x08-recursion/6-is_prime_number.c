#include "main.h"

/**
 * is_divisible - a function to test for prime numbers
 * @num: the integer
 * @factor: the divisor
 * Return: 1 for prime numbers and 0 for non-prime numbers
 */


int is_divisible(int num, int factor)
{
	if (num % factor == 0)
		return (0);
	else if (factor == num / 2)
		return (1);

	return (is_divisible(num, factor + 1));
}

/**
 * is_prime_number - a function to indicate prime numbers
 * @n: the integer to test
 * Return: 1 for prime number and 0 for otherwise
 */

int is_prime_number(int n)
{
	int factor = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, factor));
}
