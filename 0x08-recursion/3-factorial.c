#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Input factorial.
 *
 * Return: Always (0).
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
