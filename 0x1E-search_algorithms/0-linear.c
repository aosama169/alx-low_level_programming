#include "search_algos.h"

/**
 * linear_search - search for value in array of int
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: Always EXIT SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t tmpArray;

	if (array == NULL)
	{
		return (-1);
	}

	for (tmpArray = 0; tmpArray < size; tmpArray++)
	{
		printf("Value checked array[%li] = [%i]\n", tmpArray, array[tmpArray]);
		if (array[tmpArray] == value)
		{
			return (tmpArray);
		}
	}
	return (-1);
}
