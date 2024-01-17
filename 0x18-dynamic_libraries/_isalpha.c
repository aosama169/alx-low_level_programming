#include "main.h"
/**
 * _isalpha - Returns one if c is a letter
 * @c: unsigned int value to compare with ASCII value
 * 
 * Return: 1 if its alphabet else zero.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
