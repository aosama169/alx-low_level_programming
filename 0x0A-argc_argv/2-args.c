#include <stdio.h>

/**
 * main - prints all args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

