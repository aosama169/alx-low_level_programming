#include "stdio.h"

/**
 * _puts - prints a string to print
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

