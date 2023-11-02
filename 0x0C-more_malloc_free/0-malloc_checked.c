#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: Input
  *
  * Return: Output.
  */
void *malloc_checked(unsigned int b)
{
	void *qad;

	qad = malloc(b);

	if (qad == NULL)
		exit(98);

	return (qad);
}
