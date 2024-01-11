#include "lists.h"

/**
 * add_dnodeint - Adds a dlistint_t list.
 * @head: A head of the dlistint_t list.
 * @n: The integer.
 *
 * Return: node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *old;

	old = malloc(sizeof(dlistint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->prev = NULL;
	old->next = *head;
	if (*head != NULL)
		(*head)->prev = old;
	*head = old;

	return (old);
}
