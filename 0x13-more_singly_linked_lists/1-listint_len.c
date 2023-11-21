#include <stdio.h>
#include "lists.h"

/**
  * listint_len - linked list
  * @h: The head 
  *
  * Return: 0
  */
size_t listint_len(const listint_t *h)
{
	int qad = 0;

	if (h != 0)
	{
		while (h)
		{
			h = h->next;
			qad++;
		}
	}

	return (qad);
}
