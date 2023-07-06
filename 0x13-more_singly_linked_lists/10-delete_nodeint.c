#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t linked list.
 * @head: double pointer to the linked list
 * @index: indez where new node should be added
 * Return: 1 if suceeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int x;

	temp = *head;
	ptr = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (x < index -1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		x++;
	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}
