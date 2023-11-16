#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node
  * @head: Input
  * @str: input
  *
  * Return: 0
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *sal, *ope;

	if (str != 0)
	{
		sal = malloc(sizeof(list_t));
		if (sal == 0)
			return (0);

		sal->str = strdup(str);
		sal->len = _strlen(str);
		sal->next = 0;

		if (*head == 0)
		{
			*head  = sal;
			return (*head);
		}
		else
		{
			ope = *head;
			while (ope->next)
				ope = ope->next;

			ope->next = sal;
			return (ope);
		}
	}

	return (0);
}

/**
  * _strlen - length of a string
  * @s: input
  *
  * Return: output
  */
int _strlen(const char *s)
{
	int qad = 0;

	while (*s)
	{
		s++;
		qad++;
	}

	return (qad);
}
