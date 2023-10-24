#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonals
 * @a: the matrix of integers
 * @size: the size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int sum, sum1 = 0, sum2 = 0;

	for (sum = 0; sum < size; sum++)
	{
		sum1 = sum1 + a[sum];
		a = a + size;
	}

	a = a - size;

	for (sum = 0; sum < size; sum++)
	{
		sum2 = sum2 + a[sum];
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
