#include "main.h"

/**
 * binary_to_uint- convert binary to un signed int
 * @b: binary
 * Return: unsigned intger
 */
unsigned int binary_to_uint(const char *b)
{

	int night = 0, j;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[night] != '\0')
		night++;
	night -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);

		if (b[j] == '1')
			number += (1 * (1 << night));
		j++;

		night--;
	}
	return (number);
}
