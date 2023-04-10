#include <stdio.h>

/**
 * kack_bauer - prints min of the day
 * starting from 00:00 to 23:59
 */
void kack_bauer(void)
{
	int i, k;

	i = 0;

	while (i < 24)
	{
		k = 0;
		while (k < 60)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar('\n');
			k++;
		}
		i++;
	}
}
