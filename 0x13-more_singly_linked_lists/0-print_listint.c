#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Printing list
  * @h: The head
  * Return: Zero(0)
  */
size_t print_listint(const listint_t *h)
{
	int qadri = 0;

	if (h != 0)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			qadri++;
		}
	}

	return (qadri);
}
