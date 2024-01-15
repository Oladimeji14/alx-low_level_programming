#include "main.h"

/**
 * _strncat - Concatenates two strings, up to n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
    int x = 0;
    int y = 0;

    while (dest[x] != '\0')
    {
        x++;
    }

    while (y < n && src[y] != '\0')
    {
        dest[x] = src[y];
        x++;
        y++;
    }

    dest[x] = '\0';

    return dest;
}
