#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /* Initialize a counter for the nodes */

	/* Iterate through the list */
	while (h != NULL)
	{
		h = h->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	return (count);
}
