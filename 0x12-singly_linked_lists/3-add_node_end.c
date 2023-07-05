#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to the head
 * @str: string to be printed
 * Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end;
	list_t *temp = *head;
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	add_end = malloc(sizeof(list_t));
	if (add_end == NULL)
		return (NULL);
	add_end->str = strdup(str);
	add_end->len = len;
	add_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_end;
		return (add_end);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add_end;

	return (add_end);
}
