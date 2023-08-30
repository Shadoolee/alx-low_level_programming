#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * Return: The data (n) of the deleted the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0); /* If the list is empty, return 0 */

	data = (*head)->n; /* Store the data of head node */
	temp = *head; /* Create a temp. pointer to the head node */

	*head = temp->next; /* Move the pointer to the next node */
	free(temp); /* Free the old node */

	return (data); /* Return the data of the deleted head node */
}
