#include "main.h"
/**
 * _strlen - Function for counting length of string
 * @s: a pointer for counting strting lenth
 * 
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
