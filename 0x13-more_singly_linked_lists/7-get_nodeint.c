#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - Get the node of index
  * @head: the head
  * @index: index
  *
  * Return: 0
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int qad = 0;

	if (head)
	{
		while (head)
		{
			if (qad == index)
				return (head);

			head = head->next;
			qad++;
		}
	}

	return (NULL);
}
