#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 *
 * @head: head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sumNum;

	sumNum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sumNum += head->n;
			head = head->next;
		}
	}

	return (sumNum);
}
