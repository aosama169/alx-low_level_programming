#include <stdio.h>

/**
 * swap_int used to swap to integers
 * @a first integer
 * @b second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c; 
}

