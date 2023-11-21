#include <stdio.h>
#include "lists.h"

/**
  * listint_len - length of the list
  * @h: The head
  *
  * Return: 0
  */
size_t listint_len(const listint_t *h)
{
	int qadri = 0;

	if (h != 0)
	{
		while (h)
		{
			h = h->next;
			qadri++;
		}
	}

	return (qadi);
}
