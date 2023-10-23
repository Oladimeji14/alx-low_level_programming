#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int qad;

	for (qad = 0; qad < n; qad++)
	{
		s[qad] = b;
	}

	return (s);
}
