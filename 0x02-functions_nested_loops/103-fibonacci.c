#include <stdio.h>

/**
 * main - finds and prints the sum of the even num
 * Return: 0 success
 */
int main(void)
{
	int i;
	unsigned long int j, k, num, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		num = j + k;
		j = k;
		k = num;
	}

	printf("%lu\n", sum);

	return (0);
}
