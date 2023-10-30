#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: Input array
  * @c: Input array
  *
  * Return: Output
  */
char *create_array(unsigned int size, char c)
{
	unsigned int qad;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (qad = 0; qad < size; qad++)
	{
		s[qad] = c;
	}

	return (s);
}
