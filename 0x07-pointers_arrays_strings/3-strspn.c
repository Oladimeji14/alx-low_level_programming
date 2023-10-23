#include "main.h"

/**
  * _strspn - Entry point of length of a prefix substre
  * @s: Input
  * @accept: Input
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, c = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				c++;
			}

			b++;
		}

		a++;
	}

	return (c);
}
