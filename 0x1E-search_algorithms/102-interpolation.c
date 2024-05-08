#include "search_algos.h"

/**
 * interpolation_search - function search for value in sorted array of ints
 *
 * @array: Array is a pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for in array
 *
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lowVal = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (array != NULL)
	{
		while ((array[high] != array[lowVal]) &&
		       (value >= array[lowVal]) &&
		       (value <= array[high]))
		{
			pos = lowVal + (((double)(high - lowVal) / (array[high] - array[lowVal])) *
				     (value - array[lowVal]));
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				lowVal = pos + 1;
			else if (value < array[pos])
				high = pos - 1;
			else
				return (pos);
		}
		if (value == array[lowVal])
			return (lowVal);
		pos = lowVal + (((double)(high - lowVal) / (array[high] - array[lowVal]))
			     * (value - array[lowVal]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
