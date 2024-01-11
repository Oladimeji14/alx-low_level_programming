#include "lists.h"

/**
 * dlistint_len - Counts a linked dlistint_t list.
 * @h: The head 
 *
 * Return: 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
