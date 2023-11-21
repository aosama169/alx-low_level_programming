#include "lists.h"


/**
 * pop_listint - delete head node of the linked list
 * @head: pointer to first element in  linked list
 *
 * Return: the data inside elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
