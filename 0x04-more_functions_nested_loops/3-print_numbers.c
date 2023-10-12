#include "main.h"

/**
  * print_numbers - Produce the digits since 0 up to 9
  *
  * Return: The digits since 0 up to 9
  */
void print_numbers(void)
{
	int qad;

	for (qad = 0; qad <= 9; qad++)
	{
		_putchar(qad + '0');
	}

	_putchar('\n');
}
