#include "search_algos.h"

/**
 * jump_search -  function search for value in sorted array of ints
 *
 * @array: Array pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for in array
 *
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lowVal = 0;
	size_t high = 0, i = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			lowVal = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       lowVal, array[lowVal]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       lowVal, high);
		for (i = lowVal; i <= high; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
