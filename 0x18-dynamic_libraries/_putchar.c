#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out character to the stdout
 * @c: character to be printed
 * Return: zero
 */
int  _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
