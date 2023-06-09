#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to the linked list
 * Return: sum of all the data of linked list. 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
