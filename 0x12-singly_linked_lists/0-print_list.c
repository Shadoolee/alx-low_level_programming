#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialize a counter for the nodes */

	/* Iterate through the list */
	while (h != NULL)
	{
		/* Print the current node's information */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	return (count);
}
