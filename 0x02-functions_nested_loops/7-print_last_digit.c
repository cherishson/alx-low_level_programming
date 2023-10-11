#include "main.h"

/**
 *  print_last_digit - prints last digits of a number
 *  @n: the number whose last digit is to be printed
 *
 *  Return: the last digit of the number n
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
