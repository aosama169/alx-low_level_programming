#include "search_algos.h"

/**
 * binary_search - function search for value in sorted array of ints
 *
 * @array: Array pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for in array
 *
 * Return: first index where value located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lftArr = 0;
	size_t rghtArr = size - 1;
	size_t midArr = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (lftArr <= rghtArr)
		{
			midArr = (lftArr + rghtArr) / 2;
			printf("Searching in array: ");
			for (i = lftArr; i < rghtArr; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[midArr] < value)
			{
				lftArr = midArr + 1;
			}
			else if (array[midArr] > value)
			{
				rghtArr = midArr - 1;
			}
			else
			{
				return (midArr);
			}
		}
	}
	return (-1);
}
