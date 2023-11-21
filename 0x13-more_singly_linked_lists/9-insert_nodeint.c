#include "lists.h"


/**
 * insert_nodeint_at_index - insert new node in the linked list
 * @head: pointer to first node
 * @idx: index for new node
 * @n: data to be inserted
 *
 * Return: pointer for new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *myList;
	listint_t *temp = *head;

	myList = malloc(sizeof(listint_t));
	if (!myList || !head)
		return (NULL);

	myList->n = n;
	myList->next = NULL;

	if (idx == 0)
	{
		myList->next = *head;
		*head = myList;
		return (myList);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			myList->next = temp->next;
			temp->next = myList;
			return (myList);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
