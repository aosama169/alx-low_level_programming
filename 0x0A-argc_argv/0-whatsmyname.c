#include <stdio.h>

/**
 * main - print program names
 * @argc: num arguments
 * @argv: array of arguments
 *
 * Return: Always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

