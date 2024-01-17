#include "main.h"
#include "main.h"

/**
 * _isupper - check uppercase
 * @c: parameter
 * Return: zero if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);

	else
		return (0);
}
