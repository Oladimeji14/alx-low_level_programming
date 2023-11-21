#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - free list 2
  * @head: the head
  *
  * Return: 0
  */
void free_listint2(listint_t **head)
{
	listint_t *qad;

	if (head)
	{
		while (*head)
		{
			qad = (*head);
			*head = (*head)->next;
			free(qad);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
