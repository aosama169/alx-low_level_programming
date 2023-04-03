#include <stdio.h>

/*
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination
 * @src: source string
 * Return: destination
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

