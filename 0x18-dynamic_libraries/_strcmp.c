#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *
 *Return: compared value
 */
int _strcmp(char *s1, char *s2)
{
	int ct, cmpVal;

	ct = 0;
	while (s1[ct] == s2[ct] && s1[ct] != '\0')
		ct++;

	cmpVal = s1[ct] - s2[ct];
	return (cmpVal);
}
