#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: NULL - if function fails
 *         Otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_to_add, *ptr;

	ptr = *head;
	node_to_add = malloc(sizeof(listint_t));
	if (node_to_add != NULL)
	{
		node_to_add->n = n;
		node_to_add->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node_to_add;
	}
	else
		*head = node_to_add;
	return (node_to_add);
}
