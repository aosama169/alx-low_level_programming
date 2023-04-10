#include <stdio.h>

/**
 * _strncpy - copy two strings
 * @dest: pointer for destination
 * @src: pointer for source string
 * @n: number of charachters to copy
 *
 * Return: pointer of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

