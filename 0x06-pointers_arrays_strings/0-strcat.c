#include "main.h"

/**
 * strcat - Concatenates of the two string pointed to by @src, including the terminating
 * @dest: A pointer to string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int qad = 0, dest_len = 0;

	while (dest[qad++])
		dest_len++;

	for (qad = 0; src[qad]; qad++)
		dest[dest_len++] = src[qad];

	return (dest);
}
