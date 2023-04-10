#include <stdio.h>

/**
 * times_table - prints the 9 time table
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = j * i;
			if (j == 0)
			{
				putchar(x + '0');
			}

			if (x < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(x + '0');
			} else if (x >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
			}
		}
		putchar('\n');
	}
}
