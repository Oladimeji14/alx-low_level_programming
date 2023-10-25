#include "main.h"

/**
  * factorial - Factorial of a given number
  * @n: Input factorial
  *
  * Return: Always (0)
  */
int factorial(int nb)
{
	if (nb < 0)
		return (-1);

	if (nb <= 1)
		return (1);

	return (nb * factorial(nb - 1));
}
