#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals of the metrices
 * @a: square matrix to print the sum of diagonals
 * @size: size of the matrix to be printed
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
