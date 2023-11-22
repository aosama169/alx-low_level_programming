#include "lists.h"

/**
 * free_listint_safe - free linked list given
 * @h: pointer to 1st node in linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int checker;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		checker = *h - (*h)->next;
		if (checker > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
