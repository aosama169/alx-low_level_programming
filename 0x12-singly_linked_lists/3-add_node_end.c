#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at end of a linked list
 * @head: double pointer to  list
 * @str: string to put in new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int count = 0;
	while (str[count])
		count++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->count = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
