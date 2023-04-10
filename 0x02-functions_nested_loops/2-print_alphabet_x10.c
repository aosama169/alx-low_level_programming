#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 */
void print_alphabet_x10(void)
{
	char chr;
	int i;

	i = 0;

	while (i < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			putchar(chr);
			chr++;
		}
		putchar('\n');
		i++;
	}
}
