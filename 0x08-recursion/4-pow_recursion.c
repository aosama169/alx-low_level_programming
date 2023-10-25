#include<stdio.h>

/**
 * _pow_recursion - returns the natural square root of a num
 * @x: first number
 * @y: second number
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

