#include <stdio.h>
/**
 * main - a program to compute and print the sum of 3 and 5 multiples
 *
 * Return: 0
 */

int main(void)
{
	int a, b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			b += a;
		}

	}
	printf("%d\n", b);
	return (0);
}


