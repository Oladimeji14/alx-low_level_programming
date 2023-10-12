#include "holberton.h"

/**
  * print_most_numbers - Produe the digits since 0 up to 9
  *
  * Prints the digits excluding 2 and 4
  *
  * Return: The digits since 0 up to 9
  */
void print_most_numbers(void)
{
	int qad = 0;

	for (; qad <= 9; qad++)
	{
		if (qad == 2 || qad == 4)
		{
			continue;
		}
		else
		{
			_putchar(qad + '0');
		}
	}

	_putchar('\n');
}
