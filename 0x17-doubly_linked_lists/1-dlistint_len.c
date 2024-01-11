#include "lists.h"

/**
 * dlistint_len - Counts nodes in a linked dlistint_t list.
 * @h: The head of the list.
 *
 * Return: Number of nodes.
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
