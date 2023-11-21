#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum of the list
  * @head: head
  *
  * Return: 0
  */
int sum_listint(listint_t *head)
{
	int sal = 0;

	if (head)
	{
		while (head)
		{
			sal += head->n;
			head = head->next;
		}
	}

	return (sal);
}
