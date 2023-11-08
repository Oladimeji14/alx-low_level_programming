#include "function_pointers.h"

/**
  * array_iterator - printing a function of parameter
  * @array: Input
  * @size: Input
  * @action: Input
  *
  * Return: Output
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int qad = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (qad < size)
		{
			action(array[qad]);
			qad++;
		}
	}
}
