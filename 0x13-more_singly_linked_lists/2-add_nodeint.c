#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds node list
  * @head: The head
  * @n: The node
  *
  * Return: Null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *qad;

	if (head != NULL)
	{
		qad = malloc(sizeof(listint_t));
		if (qad == NULL)
			return (NULL);

		qad->n = n;
		qad->next = *head;
		*head = qad;

		return (qad);
	}

	return (NULL);
}
