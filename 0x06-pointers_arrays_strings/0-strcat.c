#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int n = 0, i;

	while (dest[n])
	{
		n++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
