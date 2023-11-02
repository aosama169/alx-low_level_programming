#include <stdlib.h>

/**
 * *array_range - create array of intgers
 * @min: min range of value stored
 * @max: max range of value stored and number of elements
 *
 * Return: pointer to the new array created
 */
int *array_range(int min, int max)
{
	int *ptr1;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr1 = malloc(sizeof(int) * size);

	if (ptr1 == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr1[i] = min++;

	return (ptr1);
}
