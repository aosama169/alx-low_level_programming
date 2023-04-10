#include <stdio.h>

/**
 * print_to_98 - print all natural numbers to 98
 * @n: print from this num
 */
void print_to_98(int n)
{
	int i, k;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
		{
			if (k != 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}
}
