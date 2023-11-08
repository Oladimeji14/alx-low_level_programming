#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: Input
  * @size: Input
  * @cmp: Input
  *
  * Return: Output
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int qad = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (qad < size)
			{
				if (cmp(array[qad]))
					return (qad);

				qad++;
			}
		}
	}

	return (-1);
}
