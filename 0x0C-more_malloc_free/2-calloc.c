#include <stdlib.h>

/**
 * *_memset - fill memory with a const byte
 * @s: memory area to be filled
 * @b: char to be copied to
 * @n: number of times to be copied
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: num of elements in the array
 * @size: size of each element
 *
 * Return: pointer to be allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr1 = malloc(size * nmemb);

	if (ptr1 == NULL)
		return (NULL);

	_memset(ptr1, 0, nmemb * size);

	return (ptr1);
}
