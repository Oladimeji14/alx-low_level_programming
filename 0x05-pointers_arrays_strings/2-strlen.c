#include "main.h"

/**
  * _strlen - Function that returns the length of a string
  * @s: String to count
  *
  * Return: String length that is always 0
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

