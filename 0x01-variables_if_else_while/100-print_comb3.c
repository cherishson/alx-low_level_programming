#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		b = a + 1;
		do {
			putchar('0' + a);
			putchar('0' + b);


			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		} while (b < 10);
	}

	putchar('\n');

	return (0);
}
