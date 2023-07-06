#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of the linked list
 * @index: position of node to be returned
 * Return: nth node of a listint_t linked list. 0 if it does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	count = 0;
	temp = head;

	while (head != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (head == NULL)
		return (NULL);
	return (temp);
}
