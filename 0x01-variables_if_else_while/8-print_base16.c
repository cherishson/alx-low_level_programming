#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int q;

	for (q = 0; q < 16; q++)
	{
		if (q < 10)
		{
			putchar('0' + q);
		}
		if (q >= 10)
		{
			putchar(87 + q);
		}
	}
	putchar('\n');

	return (0);
}
