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
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	ptr1 = malloc(lengthof(int) * length);

	if (ptr1 == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr1[i] = min++;

	return (ptr1);
}
