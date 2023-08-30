#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Return the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The sum of all the data (n) of the linked list, or 0 if the list
 *	 is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /* Initialise the sum to 0 */
	listint_t *current = head; /* Create a pointer to transverse the list */

	/* Transverse the linked list, accumulate the sum */
	while (current != NULL)
	{
		sum += current->n; /* Add the current node's data to sum */
		current = current->next; /* Move to the next node */
	}

	return (sum); /* Return the sum of all the data (n) of the linked list */
}
