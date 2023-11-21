#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds node to the end 
  * @head: The head 
  * @n: The number
  * Return: Null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *qad, *sal;

	if (head)
	{
		qad = malloc(sizeof(listint_t));
		if (qad == NULL)
			return (NULL);

		qad->n = n;
		qad->next = NULL;

		if (*head == NULL)
		{
			*head = qad;
			return (*head);
		}
		else
		{
			sal = *head;
			while (sal->next)
				sal = sal->next;

			sal->next = qad;
			return (sal);
		}
	}

	return (NULL);
}
