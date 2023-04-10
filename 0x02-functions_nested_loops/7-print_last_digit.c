#include <stdio.h>

/**
 * print_last_digit - prints the last digit of any num
 * @n: the integer
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		n = -n;

	k = n % 10;

	if (k < 0)
		k = -k;

	putchar(k + '0');

	return (k);
}
