#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1 is returned, and errno is set appropriately.
 */
int _putchar(char character)
{
    return (write(1, &character, 1));
}
