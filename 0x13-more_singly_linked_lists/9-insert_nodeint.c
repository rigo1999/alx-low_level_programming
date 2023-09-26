#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of a list
 * @idx: index of the list where the new node will be added
 * @n: integer for the new node
 * Return: NULL - if it fails
 *         Otherwise - the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ptr1 = *head, *h =  malloc(sizeof(listint_t);

if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);
ptr1->n = n;

if (idx == 0)
	{
		ptr1->next = *head;
		*head = ptr1;
	}
	else
	{
		ptr1->next = h->next;
		h->next = ptr1;
	}

	return (ptr1);
}
