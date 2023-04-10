#include <stdio.h>

/**
 * *_strstr - locates a substring in a string
 * @haystack: string to search into
 * @needle: string to look for
 *
 * Return: pointer to the beginning of the located substr
 * or NULL if the substr isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}
	return (NULL);
}
