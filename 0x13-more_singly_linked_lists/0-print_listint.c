#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: linked list of type listint
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
