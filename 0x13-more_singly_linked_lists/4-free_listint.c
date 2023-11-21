#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Free list
  * @head: The head
  * Return: 0
  */
void free_listint(listint_t *head)
{
	listint_t *qad;

	while (head)
	{
		qad = head;
		head = head->next;
		free(qad);
	}

	free(head);
}
