#include "function_pointers.h"

/**
 * int_index - earches for an int
 * @array: array to be searched
 * @size: size of an array
 * @cmp: pointer to compare
 *
 * Return: index of the first element
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
