#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a givien position in a
 * listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index where the new node should be added.
 * @n: The value to be added to the new node.
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int count = 0; /* Initialize a counter for the node */

	/*Allcate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the value of the new node */
	new_node->next = NULL;

	if (idx ==  0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head; /* Create a pointer to traverse the list */

	/* Traverse the linked list of the poistion */
	while (current != NULL)
	{
		if (count == idx - 1) /* Check if the current node is the one before */
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}

		current = current->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	/* If it's not possible to add the new node at index idx, return NULL */
	free(new_node);
	return (NULL);
}
