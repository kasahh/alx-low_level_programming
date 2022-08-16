#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: data inside the deleted elements or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!head || !*head)
		return (0);
	val = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (val);
}
