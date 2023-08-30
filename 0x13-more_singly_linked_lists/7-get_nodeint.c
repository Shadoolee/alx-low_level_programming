#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to be returned, starting at 0.
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int count = 0; /* Initialize a counter for the nodes */
	listint_t *current = head; /* Create a pointer to transverse the list */

	while (current != NULL) /* Transverse the linked list */
	{
		if (count == index) /* Check if the current node is the desired index */
			return (current);

		current = current->next; /* Move to he next node */
		count++; /* Increment the node count */
	}

	return (NULL); /* If the node does not exist, return NULL */
}
