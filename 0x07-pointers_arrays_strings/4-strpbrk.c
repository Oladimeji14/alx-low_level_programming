#include "main.h"

/**
  * _strpbrk - entry point of any set of bytes
  * @s: input string
  * @accept: input characters
  *
  * Return: Always 0
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
