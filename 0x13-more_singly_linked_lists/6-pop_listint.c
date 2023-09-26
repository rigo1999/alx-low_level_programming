#include "lists.h"

/**
 * pop_listint - deletes the head node a linked list
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         otherwise 0 - if the linked list is Null
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int n;

	tp = *head;

	if (tp == NULL)
		return (0);

	*head = tp->next;
	n = tp->n;
	free(tp);

	return (n);
}
