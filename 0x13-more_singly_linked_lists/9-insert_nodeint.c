#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the linked list
 * @idx: indez where new node should be added
 * @n: data to be inserted at index idx
 * Return: adress of new node. NULL if it fails
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;

	}
	return (NULL);
}
