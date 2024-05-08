#include "search_algos.h"
/**
 * b_search - function search for value in sorted array of ints
 *
 * @array: Array pointer to first element of array to search in
 * @low: Left index in array
 * @high: right idx in array
 * @value: Value to search for in array
 *
 * Return: first idx where value located
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t left = low;
	size_t right = high - 1;
	size_t mid = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - Function search for value in sorted array of ints
 *
 * @array: Array is a pointer to first element of array to search 
 * @size: Number of elements in array
 * @value: Value to search for in array
 *
 * Return: first idx where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;
	int results;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		results = b_search(array, bound / 2,  min, value);
		if (results != -1)
			return (results);
	}
	return (-1);
}
