#include "main.h"

/**
  * _strncat - Function that print concatenates two strings
  * @dest: The dest value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int qad = 0, j = 0;

	while (dest[qad])
	{
		qad++;
	}

	while (j < n && src[j])
	{
		dest[qad] = src[j];
		qad++;
		j++;
	}

	dest[qad + n + 1] = '\0';

	return (dest);
}

