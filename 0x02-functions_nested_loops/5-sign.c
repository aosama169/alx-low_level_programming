#include <stdio.h>

/**
 * print_sign - prints the sign of number
 * @n: the num
 * Return: 1 and prints + if n is more than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar(48);
		return (0);
	} else if (n < 0)
	{
		putchar('-');
	}
		return (-1);
}
