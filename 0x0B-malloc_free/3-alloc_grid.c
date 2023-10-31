#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of array
 * @height: the height of array
 *
 * Return: a pointer to the 2 dimensional array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **two;
	int hgt,  wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	two = malloc(sizeof(int *) * height);

	if (two == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		two[hgt] = malloc(sizeof(int) * width);

		if (two[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(two[hgt]);

			free(two);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			two[hgt][wid] = 0;
	}

	return (two);
}
