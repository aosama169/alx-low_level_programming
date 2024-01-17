#include "main.h"
#define NULL 0

/**
* _strpbrk - return pointer to byte in s that matches a byte
* @s: string to search
* @accept: target matches
* Return: pointer to index of string
*/

char *_strpbrk(char *s, char *accept)
{
	int xn = 0, y;

	while (s[xn] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[xn] == accept[y])
			{
				s = &s[xn];
				return (s);
			}

		}

	x++;
	}

	return (NULL);

}
