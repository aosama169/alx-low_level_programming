#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 * @argc: num of args
 * @argv: array of args
 *
 * Return: zero for success
 */

int main(int argc, char *argv[])
{
	int summit, num, i, x, k;

	summit = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (argv[i][x] > '9' || argv[i][x] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			summit += num;
		}
	}

	printf("%d\n", summit);
	return (0);
}

