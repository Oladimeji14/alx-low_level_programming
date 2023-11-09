#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - Printing number
  * @separator: Separating number
  * @n: Number
  *
  * Return: Output
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int qad = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (qad < n)
		{
			printf("%d", va_arg(args, int));

			if (qad != n - 1  && separator != NULL)
				printf("%s", separator);

			qad++;
		}
		va_end(args);
	}
	printf("\n");
}
