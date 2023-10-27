#include <stdio.h>

/**
 * main - print the num of args
 * @argc: num args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

