#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocation of array
  * @nmemb: Input
  * @size: Input
  *
  * Return: Output
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int qad = 0, l = 0;
	char *sal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	sal = malloc(l);

	if (sal == NULL)
		return (NULL);

	while (qad < l)
	{
		sal[qad] = 0;
		qad++;
	}

	return (sal);
}
