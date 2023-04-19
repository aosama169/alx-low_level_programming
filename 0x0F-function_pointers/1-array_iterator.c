#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: array to iterate
 * @size: size of the array of functions
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
