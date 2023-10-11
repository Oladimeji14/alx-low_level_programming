#include "main.h"

/**
 * print_times_table - Print the multiplication table of the input, starting with 0
 * @n: int type number
 */

void print_times_table(int n)

{

	int num, qad, bab;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (qad = 1; qad <= n; qad++)
	{
	_putchar(',');
	_putchar(' ');
	bab = num * qad;
	if (bab <= 9)
	_putchar(' ');
	if (bab >= 100)
	{
	_putchar((bab / 100) + '0');
	_putchar(((bab / 10)) % 10 + '0');
	}
	else if (bab <= 99 && bab >= 10)
	{
	_putchar((bab / 10) + '0');
	}
	_putchar((bab % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
