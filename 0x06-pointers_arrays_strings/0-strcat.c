#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: pointer for destination
 * @src: pointer for source string
 * return concatenated string
 */

char _strcat(char *dest, char *src)
{
	*dest = *dest + *src;
	return (dest);
}
