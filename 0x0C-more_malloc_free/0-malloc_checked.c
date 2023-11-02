#include <stdlib.h>

/**
 * *malloc_checked - allocated mem by malloc prog
 * @b: num of bytes to be allocate
 *
 * Return: a pointer for the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *tmp1;

	tmp1 = (char *) malloc(b);

	if (tmp1 == NULL)
		exit(98);

	return (tmp1);
}

