#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - printing the number of a bit
  * @n: number
  * @m: input
  *
  * Return: 0
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int qad = 0, sal = 0;

	qad = n ^ m;
	while (qad)
	{
		if (qad & 1)
			sal++;

		qad >>= 1;
	}

	return (sal);
}
