#include "main.h"

/**
 *  print_last_digit - prints last digits of a number
 *  @n: the number whose last digit is to be printed
 *
 *  Return: the last digit of the number n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;

		_putchar(last_digit + '0');
	}

		return (last_digit);
}
