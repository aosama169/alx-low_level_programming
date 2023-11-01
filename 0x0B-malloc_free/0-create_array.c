#include <stdlib.h>

/**
 * *create_array - create array of chars
 * and initiate it with a specific charachter
 * @size: the size of the array
 * @c: the char to init the array
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	p = (char *)  malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (n < size)
	{
		*(p + n) = c;
		n++;
	}

	*(p + n) = '\0';

	return (p);
}

