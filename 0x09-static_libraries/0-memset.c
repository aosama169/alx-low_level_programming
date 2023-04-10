#include <stdio.h>

/**
 * _memset - Fills Memory with constant byte
 * @s: pointer for the memory area
 * @b: byte to fill with
 * @n: number of bytes
 *
 * Return: pointer to mem area
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

