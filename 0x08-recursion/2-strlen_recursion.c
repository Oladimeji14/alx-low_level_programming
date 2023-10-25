#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Input of the length.
  * Return: Always (0).
 */
int _strlen_recursion(char *s)
{
	int qad = 0;

	if (*s)
	{
		qad++;
		qad += _strlen_recursion(s + 1);
	}

	return (qad);
}
