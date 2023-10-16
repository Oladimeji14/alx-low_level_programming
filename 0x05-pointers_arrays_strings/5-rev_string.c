#include "main.h"

/**
  * rev_string - The function that print  reverses a string
  * @s: The string to be adjusted
  * Return: String in reverses
  */
void rev_string(char *s)
{
	char rev = s[0];
	int magic = 0;
	int u;

	while (s[magic] != '\0')
	magic++;
	for (u = 0; u < magic; u++)
	{
		magic--;
		rev = s[u];
		s[u] = s[magic];
		s[magic] = rev;
	}
}
	


