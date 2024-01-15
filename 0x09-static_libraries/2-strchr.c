#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Input string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of the character in the string, or
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    int qad = 0;

    for (; s[qad] != '\0'; qad++)
    {
        if (s[qad] == c)
            return (&s[qad]);
    }

    return NULL;
}
