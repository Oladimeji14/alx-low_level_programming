#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer number.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int qad = ola;

	if (ola < 0)
	{
		ola *= -1;
		qad = ola;
		_putchar('-');
	}

	qad /= 10;

	if (qad != 0)
		print_number(qad);

	_putchar((unsigned int) ola % 10 + '0');

}
