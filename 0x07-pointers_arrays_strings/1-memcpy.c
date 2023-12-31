#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: dest memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int qad;

	for (qad = 0; qad < n; qad++)
	{
		dest[qad] = src[qad];
	}

	return (dest);
}
