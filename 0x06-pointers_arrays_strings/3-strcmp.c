#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: pointer for first string
 * @s2: pointer for second string
 * Return: number of differences
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

