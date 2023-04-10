#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci nums
 * start from 1 and 2
 * followed by a new line
 * Return: ALways 0
 */
int main(void)
{
	unsigned long int i, j, k, num1, num2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	num1 = j / 1000000000;
	num2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + num1;
		num1 = k1 - num1;
		k2 = k2 + num2;
		num2 = k2 - num2;
	}

	printf("\n");

	return (0);
}
