#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - Reallocating
  * @ptr: Input
  * @old_size: Inout
  * @new_size: Input
  *
  * Return: Output
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		r = malloc(new_size);

		if (r == NULL)
			return (NULL);

		return (r);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	r = malloc(new_size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		r[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (r);
}
