#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - print  the value of a bit at a given index
  * @n: The number
  * @index: The index
  *
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int qad = 0;

	while (n)
	{
		if (qad == index)
		{
			if (n % 10)
				return (1);
			else
				return (0);
		}

		n = n / 10;
		qad++;
	}

	if (index > qad && index < 86)
		return (0);

	return (-1);
}
