#include <stdio.h>

/**
 * main - prints the summition of all the multipliers
 * Return: Always Success
 */
int main(void)
{
	unsigned long int sum2, sum3, sum;
	int i;

	sum2 = 0;
	sum3 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum2 = sum2 + i;
		} else if ((i % 5) == 0)
		{
			sum3 = sum3 + i;
		}
	}
	sum = sum2 + sum3;
	printf("%lu\n", sum);
	return (0);
}
