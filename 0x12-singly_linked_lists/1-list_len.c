#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return num of elements in the linked list
 * @h: pointer to list
 *
 * Return: number of elements in the h list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
