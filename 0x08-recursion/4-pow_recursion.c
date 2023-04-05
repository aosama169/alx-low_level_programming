#include<stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: number
 * Return: sqrt number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

