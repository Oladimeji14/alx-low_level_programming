#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
    int y = 0;

    while (*s != '\0')
    {
        y++;
        s++;
    }

    return y;
}
