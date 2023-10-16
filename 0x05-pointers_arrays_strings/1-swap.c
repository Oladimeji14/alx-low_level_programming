#include "main.h"

/**
  * swap_int - Printing a Swaps that values of two integers
  *
  * @a: An integer to swap
  * @b: Another set integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
