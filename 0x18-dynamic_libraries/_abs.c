#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @n: int to be operated
 *
 * Return: return unsinged int value to calling function
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
