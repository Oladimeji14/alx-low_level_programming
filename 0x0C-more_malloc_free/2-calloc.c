#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array, 
  * @nmemb: Input
  * @size: Input
  *
  * Return: Output
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int qad = 0, l = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	m = malloc(l);

	if (m == NULL)
		return (NULL);

	while (qad < l)
	{
		m[qad] = 0;
		qad++;
	}

	return (m);
}
