#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - list of length
  * @h: Input
  *
  * Return: Output
  */
size_t list_len(const list_t *h)
{
	size_t qadri = 0;

	while (h)
	{
		h = h->next;
		qadri++;
	}

	return (qadri);
}
