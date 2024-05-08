#include "search_algos.h"

/**
 * jump_list - search for value in sorted linked list of ints
 *
 * @list: Pointer to head of linked list
 * @size: Number of nodes in linked list
 * @value: value to search for it
 *
 * Return: Pointer to first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low =  NULL, *high = NULL;
	size_t limits = 0;

	if (list != NULL)
	{
		low = list;
		high = list;
		while (high->next != NULL && high->index < size && high->n < value)
		{
			low = high;
			limits += sqrt(size);
			while (high->index < limits && high->next != NULL)
				high = high->next;
			printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low->index, high->index);
		while (low != NULL && low->index < size && low->index <= high->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
			if (low->n == value)
				return (low);
			low = low->next;
		}
	}
	return (NULL);

}
