#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)

{
	listint_t *current = head; /* Create a temporay pointer to traverse list */
	listint_t *next;

	while (current != NULL)
	{
		next = current->next; /* Store the next node's address */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */
	}
}
