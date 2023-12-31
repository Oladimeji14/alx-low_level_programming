#include "main.h"

/**
  * rev_string - Reverse the output of string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, k;
	char *a, aux;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
