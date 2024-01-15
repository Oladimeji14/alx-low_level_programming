#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Input string
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
    int qad = 1, sal = 0;
    int ola = 0;

    while (!(s[sal] <= '9' && s[sal] >= '0') && s[sal] != '\0')
    {
        if (s[sal] == '-')
            qad = -1;
        sal++;
    }

    while (s[sal] <= '9' && (s[sal] >= '0' && s[sal] != '\0'))
    {
        ola = (ola * 10) + (s[sal] - '0');
        sal++;
    }

    ola *= qad;

    return ola;
}
