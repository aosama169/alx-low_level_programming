#include <stdio.h>

/**
 * _strspn - get length of substring
 *
 * @s: source string
 * @accept: from string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, flag1;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag1 = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				flag1 = 1;
			}
		}
		if (flag1 == 0)
		{
			return (n);
		}
	}

	return (0);
}

