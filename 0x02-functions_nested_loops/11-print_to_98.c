#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers fron n to 98
 * @n: the numbers to be printed
 */

void print_to_98(int n)
{
	int a;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

