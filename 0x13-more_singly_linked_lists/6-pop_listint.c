#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the linked list
 * Return: head node’s data (n). 0 if linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(*head);
	return (temp->n);
}
