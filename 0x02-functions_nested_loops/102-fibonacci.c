#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci
 * Return: zero
 */
int main(void)
{
	long int i, j, k, num;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		num = j + k;
		j = k;
		k = num;
	}

	return (0);
}
