#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head
 * @str: string to be printed
 * Return: address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
