#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints
  * @format: The conversion
  *
  * Return: No
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int qad = 0;
	unsigned int sal = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[qad])
	{
		sal = 0;
		while (sal < 4)
		{
			if (format[qad] == *form_types[sal].identifier)
			{
				form_types[sal].f(separator, args);
				separator = ", ";
			}
			sal++;
		}
		qad++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_a_char - character of type
  * @separator: The separator
  * @args: A arguments
  *
  * Return: No
  */
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - character of integer
  * @separator: The separator
  * @args: A list arguments
  *
  * Return: Nothing
  */
void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - Prints a character of float type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
