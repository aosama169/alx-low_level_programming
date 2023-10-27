#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make changes
 * for an amount of money
 * @argc: num of args
 * @argv: array of args
 *
 * Return: zero for success
 */
int main(int argc, char *argv[])
{
	int num, x, res;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coin[x])
		{
			res++;
			num -= coin[x];
		}
	}

	printf("%d\n", res);
	return (0);
}

