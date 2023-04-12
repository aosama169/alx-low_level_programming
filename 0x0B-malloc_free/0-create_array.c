#include <stdlib.h>

/**
 * *create_array - create array of charachters,
 * and initiate it with a specific charachter
 * @size: size of the array
 * @c: char to init the array
 *
 * Return: pointer to the array , NULL For Error
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int k = 0;

	if ( size == 0 )
		return (NULL);

	p = ( char * )  malloc( sizeof(char) * size );

	if (p == NULL)
		return (0);

	while (k < size)
	{
		*(p + k) = c;
		k++;
	}

	*(p + k) = '\0';

	return (p);
}

