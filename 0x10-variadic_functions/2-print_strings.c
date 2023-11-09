#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function of string
  * @separator: Separator
  * @n: Number of function
  *
  * Return: Output
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int qad = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (qad < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (qad != n - 1 && separator != NULL)
				printf("%s", separator);

			qad++;
		}

		va_end(args);
	}

	printf("\n");
}
