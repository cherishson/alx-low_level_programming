#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array to search from
 * @size: the size of the array
 * @cmp: the function that does the search
 *
 * Return: the searched integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
