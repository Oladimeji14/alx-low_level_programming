#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - print a binary number to an unsigned int
  * @b: The binary
  *
  * Return: 0 
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int qad = 0, ope = 0, sal = 0;

	if (b == NULL)
		return (0);

	qad = _strlen(b);
	while (qad--)
	{
		if (b[qad] != 48 && b[qad] != 49)
			return (0);

		if (b[qad] == 49)
			sal += 1 << ope;

		ope++;
	}

	return (sal);
}

/**
  * _strlen - print length of a string
  * @s: String
  *
  * Return: Output
  */
int _strlen(const char *s)
{
	int ola = 0;

	while (s[ola])
		ola++;

	return (ola);
}
