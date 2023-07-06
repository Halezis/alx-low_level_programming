#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: double pointer head of the linked list
 * @n: node data to be added
 * Return: number of elements in a linked list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n =  n;
	new->next = NULL;

	/*handles wjem the node is initially empty*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
