#include "main.h"

/**
 * _strncpy - Copies at most n characters from the source to destination
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
    int a = 0;

    while (a < n && src[a] != '\0')
    {
        dest[a] = src[a];
        a++;
    }

    while (a < n)
    {
        dest[a] = '\0';
        a++;
    }

    return dest;
}
