#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: number to be printed
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = j * i;
				if (j == 0)
				{
					putchar(x + '0');
				} else if (x < 10 && j != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(x + '0');
				} else if (x >= 10 && x < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((x / 10) + '0');
					putchar((x % 10) + '0');
				} else if (x >= 100)
				{
					putchar(',');
					putchar(' ');
					putchar((x / 100) + '0');
					putchar(((x / 10) % 10) + '0');
					putchar((x % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}
