#include "lists.h"

/**
 * add_dnodeint_end -  the end of a dlistint_t list.
 * @h: the head of the dlistint_t list.
 * @num: the new node to contain.
 *
 * Return: Node
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int num)
{
    dlistint_t *new_node, *last_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = num;
    new_node->next = NULL;

    if (*h == NULL)
    {
        new_node->prev = NULL;
        *h = new_node;
        return (new_node);
    }

    last_node = *h;
    while (last_node->next != NULL)
        last_node = last_node->next;
    last_node->next = new_node;
    new_node->prev = last_node;

    return (new_node);
}
