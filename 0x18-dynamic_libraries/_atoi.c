#include "main.h"
/**
 * _atoi - converts string to int
 * @s: Pointer
 * Return: returns int value
 */
int _atoi(char *s)
{
	unsigned int counter = 0;
	unsigned int size = 0;
	unsigned int j = 0;
	unsigned int k1 = 1;
	unsigned int m = 1;
	unsigned int id;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;

		if (*(s + counter) == '-')
			k1 *= -1;

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		counter++;
	}

	for (id = counter - size; id < counter; id++)
	{
		j = j + ((*(s + id) - 48) * m);
		m /= 10;
	}
	return (j * k1);
}
