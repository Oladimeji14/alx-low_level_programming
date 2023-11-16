#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees list.
  * @head: Input
  *
  * Return: Output
  */
void free_list(list_t *head)
{
	list_t *qadri;

	while (head)
	{
		qadri = head;
		head = head->next;
		free(qadri->str);
		free(qadri);
	}

	free(head);
}
