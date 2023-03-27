#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{

	for (int i = 0; i <= (strlen(*str) / 2); i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

