#include "main.h"
#define NULL 0

/**
* _strchr - locate 1st occurrence of char in string
* @s: string to search with
* @c: target characer
* 
* Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int ix = 0;

	while (s[ix] != '\0' && s[ix] != c)
		ix++;

	if (s[ix] == c)
		return (&s[ix]);

	else
		return (NULL);
}
