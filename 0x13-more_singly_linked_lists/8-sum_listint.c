#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the head of a list
 * Return: sum of all the data (n)
 *         Otherwise - 0 if the list is null
 */

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}

	return (sum_of_data);
}
