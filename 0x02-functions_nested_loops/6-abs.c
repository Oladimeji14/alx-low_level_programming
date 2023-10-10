#include "main.h"

/**
 * _abs - Inserts the entire value of an integer.
 * @c: The number to be inserted.
 * Return: Entire value of number or zero
 */ 
 
int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
