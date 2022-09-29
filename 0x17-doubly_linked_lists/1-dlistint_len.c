#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elems;

	elems = 0;
	if (h == NULL)
	{
		return (elems); }
	while (h->prev != NULL)
	{
		h = h->prev; }
	while (h != NULL)
	{
		elems++;
		h = h->next; }
	return (elems);
}
