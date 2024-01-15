#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int qad = 0;
    unsigned int sal = n;

    for (; qad < sal; qad++)
    {
        dest[qad] = src[qad];
    }

    return dest;
}
