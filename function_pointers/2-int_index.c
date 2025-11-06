#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer using a comparison function
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of first element for which cmp != 0;
 *         -1 if no match, if size <= 0, or if array/cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
