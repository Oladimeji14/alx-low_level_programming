#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - pop the lists
  * @head: the head
  *
  * Return: 0
  */
int pop_listint(listint_t **head)
{
	listint_t *qad;
	int n = 0;

	if (*head != NULL)
	{
		qad = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = qad;
	}

	return (n);
}
