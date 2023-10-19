#include "main.h"

/**
 * _strncpy - Funcion that copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int salam = 0, qadri = 0;

	while (src[salam++])
		qadri++;

	for (salam = 0; src[salam] && salam < n; salam++)
		dest[salam] = src[salam];

	for (salam = qadri; salam < n; salam++)
		dest[salam] = '\0';

	return (dest);
}
