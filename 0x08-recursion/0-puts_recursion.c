#include <stdio.h>

/**
 * _puts_recursion - print string and new line
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

