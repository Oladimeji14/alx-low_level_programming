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
	int num = 0;

	if (*head != NULL)
	{
		qad = (*head)->next;
		num = (*head)->num;
		free(*head);
		*head = qad;
	}

	return (num);
}
