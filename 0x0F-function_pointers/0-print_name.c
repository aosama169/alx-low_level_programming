#include <stdlib.h>

/**
 * print_name - prints name sent to function
 * @name: name
 * @f: pointer to printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
