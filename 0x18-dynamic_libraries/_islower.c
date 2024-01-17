#include "main.h"
/**
 * _islower - checks if lowercase returns one
 * @c: Is the int value to compare with the ASCII value
 * 
 * Return: zero if successful.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
