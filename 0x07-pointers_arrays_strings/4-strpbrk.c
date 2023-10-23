#include "main.h"

/**
  * _strpbrk - Entry point for any of a set of bytes
  * @s: Input string
  * @accept: Input characters
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
