#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given
 * @array: array to iterates
 * @size: size of the array of function
 * @action: pointers to functions
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
