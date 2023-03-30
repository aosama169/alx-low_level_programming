#include <stdio.h>

/**
 * _strncat - concatenate two strings
 * @dest: pointer for destination
 * @src: pointer for source string
 * @n: number of charachters to concatenate
 *
 * Return: pointer of concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

