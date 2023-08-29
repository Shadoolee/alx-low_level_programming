#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Intialize a counter for the nodes */

	while (h != NULL) /* Transverse the linked list and count nodes */
	{
		h = h->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	return (count); /* Return the total number of nodes */
}
