#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coin to make change for an amount of money
 * @argc: number of args
 * @argv: array of args
 *
 * Return: success 0 , error 1
 */
int main(int argc, char *argv[])
{
	int num, j, res;
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

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coin[j])
		{
			res++;
			num -= coin[j];
		}
	}

	printf("%d\n", res);
	return (0);
}

