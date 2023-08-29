#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)); /*Allocate memory new node */

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the value of the new node */
	new_node->next = *head; /* Make the new node point to the current head */
	*head = new_node; /* Update the head to point to the new node */

	return (new_node); /* Return the addrss of the new element */
}
