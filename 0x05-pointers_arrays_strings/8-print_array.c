#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of integers
  * @a: Input integers
  * @n: Number of elements of to be printed
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int qad;

	for (qad = 0; qad < n; qad++)
	{
		printf("%d", a[qad]);

		if (qad != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
