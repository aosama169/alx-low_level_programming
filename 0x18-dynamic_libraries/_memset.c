#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer for memory area.
 *@b: constant to fill memory with.
 *@n: bytes of the memory area to fill.
 *
 *Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ct;

	for (ct = 0; ct < n; ct++)
	{
		s[ct] = b;
	}
	return (s);
}
