#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Input string
 *
 * Return: void
 */
void _puts(char *s)
{
    while (*s)
    {
        _putchar(*s++);
    }

    _putchar('\n');
}
