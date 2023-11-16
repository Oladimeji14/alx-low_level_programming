#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a node
  * @head: Inpu head
  * @str:  string add to the node
  *
  * Return: Output
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *salam;

	if (head != NULL && str != NULL)
	{
		salam = malloc(sizeof(list_t));
		if (salam == NULL)
			return (NULL);

		salam->str = strdup(str);
		salam->len = _strlen(str);
		salam->next = *head;

		*head = salam;

		return (salam);
	}

	return (0);
}

/**
  * _strlen - length of a string
  * @s: String
  *
  * Return: Output
  */
int _strlen(const char *s)
{
	int qadri = 0;

	while (*s)
	{
		s++;
		qadri++;
	}

	return (qadri);
}
