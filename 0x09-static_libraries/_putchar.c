#include <unistd.h>

/**
 * _putchar - write the character sent to stdout
 * @c: The character to be printed
 *
 * Return: On success then 1
 * -1 returned on errors
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
