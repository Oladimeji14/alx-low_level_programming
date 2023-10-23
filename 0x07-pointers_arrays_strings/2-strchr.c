#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int qad = 0, sal;

	while (s[qad])
	{
		qad++;
	}

	for (sal = 0; sal <= qad; sal++)
	{
		if (c == s[sal])
		{
			s += sal;
			return (s);
		}
	}

	return ('\0');
}
