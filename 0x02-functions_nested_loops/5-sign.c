#include "main.h"

/**
 * print_sign - Printing a sign number
 * @n: The number to be confirmed
 * Return: 1 for positive number, -1 for negative number or zero for anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	elseif (n > 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
