#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds node list
  * @head: The head
  * @n: node
  *
  * Return: 0
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	salam *qadri;

	if (head != 0)
	{
		qadri = malloc(sizeof(salam));
		if (qadri == 0)
			return (0);

		qadri->n = n;
		qadri->next = *head;
		*head = qadri;

		return (qadri);
	}

	return (0);
}
