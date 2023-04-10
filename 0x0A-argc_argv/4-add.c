#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array of args
 *
 * Return: success 0 , error 1
 */

int main(int argc, char *argv[])
{
	int summit, num, i, j, k;

	summit = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
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

