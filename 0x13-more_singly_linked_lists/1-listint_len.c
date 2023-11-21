#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Print list
  * @h: The head
  *
  * Return: 0
  */
size_t listint_len(const listint_t *h)
{
	int qad = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			qad++;
		}
	}

	return (qad);
}
