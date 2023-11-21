#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Addsnode to end oflist
  * @head: The head
  * @n: The value
  *
  * Return: Null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *b;

	if (head)
	{
		a = malloc(sizeof(listint_t));
		if (a == NULL)
			return (NULL);

		a->n = n;
		a->next = NULL;

		if (*head == NULL)
		{
			*head = a;
			return (*head);
		}
		else
		{
			b = *head;
			while (b->next)
				b = b->next;

			b->next = a;
			return (b);
		}
	}

	return (NULL);
}
