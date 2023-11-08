#include "function_pointers.h"

/**
  * print_name - Input name
  * @name: The name to inserted
  * @f: Input
  *
  * Return: Output
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
