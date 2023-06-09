#include <stdlib.h>

/**
 * *malloc_checked - allocate mem by malloc
 * @b: num of bytes to allocate
 *
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr1;

	ptr1 = (char *) malloc(b);

	if (ptr1 == NULL)
		exit(98);

	return (ptr1);
}

