#include "main.h"

/**
 * _islower - Confirm for the lowercase character
 * @c: The character to be confirmed
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (c);
	}
	return (0);
}
