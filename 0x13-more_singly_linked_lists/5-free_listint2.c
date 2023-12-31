#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list to be freed.
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
