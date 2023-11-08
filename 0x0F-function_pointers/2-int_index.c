#include "function_pointers.h"

/**
 * int_index - earches for an ints
 * @array: array to be search for
 * @size: size of an array
 * @cmp: pointer to be compared
 *
 * Return: indexs of the first elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
