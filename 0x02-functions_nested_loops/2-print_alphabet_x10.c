#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{

char ch;
int n;
n = 0;
while ( n < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
n++;
}

}
