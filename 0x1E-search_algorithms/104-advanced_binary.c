#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - recursive search for value in int
 * @array: pointer to first element of array to seached
 * @value: value to search for it
 * @low: starting index in arr
 * @high: ending index in arr
 *
 * Return: idx containing value
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t midVal, i;

	if (!array)
		return (-1);

	midVal = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[midVal] < value)
			return (binary_search_recursion(array, value,
							midVal + 1, high));
		if (array[midVal] >= value)
			return (binary_search_recursion(array, value,
							low, midVal));
	}

	return (-1);
}

/**
 * advanced_binary - search for value in sorted array of ints
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing value
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lowval = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, lowval, high));
}
