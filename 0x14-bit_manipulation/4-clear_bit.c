#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - print the sets the value of a bit to 0
  * @n: The number
  * @index: The index
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 10)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
