#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* Initialize a counter for the node */

	while (h != NULL) /* Transverse the link list */
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		h = h->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	return (count); /* Return the total number of nodes */
}
