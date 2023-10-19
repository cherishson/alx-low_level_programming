#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: the elements of the array
 * @n: the size of the array
 */

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", *(a + arr));

		if (arr < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

