#include "main.h"
/**
* char *_memcpy - copy n bytes from src to dest
* @dest: destination mem
* @src: source mem
* @n: number of bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int sz = n;

	if (sz > 0)
	{
		int i;

		for (i = 0; i < sz; i++)
		dest[i] = src[i];
	}

	return (dest);
}
