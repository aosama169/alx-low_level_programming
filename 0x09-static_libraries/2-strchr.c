#include <stdio.h>

/**
 * _strchr - locates a character in strings
 *
 * @s: source string
 * @c: char to find
 * Return: pointer to first string
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}

