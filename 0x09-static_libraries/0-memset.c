#include <stdio.h>

/**
 * _memset - Fills Memory with constant
 * @s: pointer for the memory area
 * @b: byte to fill with it
 * @n: number of bytes
 *
 * Return: pointer to memory area
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

