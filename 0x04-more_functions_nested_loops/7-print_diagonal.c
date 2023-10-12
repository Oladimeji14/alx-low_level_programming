#include "main.h"

/**
  * print_diagonal - Prints a  lines according to the value 
  * @n: The value of times to print  lines
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; y < a; b++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
