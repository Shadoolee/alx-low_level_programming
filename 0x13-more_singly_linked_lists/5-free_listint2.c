#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list to be freed.
 */

void free_listint2(listint_t **head)

{
	listint_t *current = *head; /* Create a temporary pointer to trasverse */
	listint_t *next;

	/* Traverse the linked list and free nodes */
	while (current != NULL)
	{
		next = current->next; /* Store the next node's address */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */
	}

	*head = NULL; /* Set the head to NULL */
}
