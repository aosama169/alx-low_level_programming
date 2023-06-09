#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source
 * @accept: string to search
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *s != '\0'; i++)
	{
		for (k = 0; accept[j] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

