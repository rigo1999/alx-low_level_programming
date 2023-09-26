#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: poniter to head of a list
 * @n: data to add
 *
 * Return: NULL if it fails
 *         Otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
