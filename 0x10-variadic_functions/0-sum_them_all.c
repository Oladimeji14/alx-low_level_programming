#include "variadic_functions.h"

/**
  * sum_them_all - Beauty is variable
  * @n: Number
  *
  * Return: Output
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int qad = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (qad < n)
		{
			sum += va_arg(args, int);
			qad++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
