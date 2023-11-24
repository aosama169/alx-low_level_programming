#include "main.h"

/**
 * set_bit - set bit to one at index specified
 * @n: number
 * @index: index with in binary number
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num <<= index;

	*n = *n | num;
	return (1);
}
