#include "main.h"

/**
 * _isdigit - check for digit
 * @c: parameters to check
 * Return: zero or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);

	else
		return (0);
}
