#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next; /* Store the next node's address */
		free(current->str); /* Free the duplicated string */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */
	}
}
