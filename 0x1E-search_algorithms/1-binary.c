#include "search_algos.h"

/**
 * binary_search- linear searches for a value in a
 * sorted array using binary
 * @array: A pointer to the sorted array
 * @size: The number of elements in the array
 * @value: The value to search for.
 *
 * Return: The index of the value into the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, n = 0, m = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (n <= m)
	{
		printf("Searching in array: ");
		for (a = n; a <= m; a++)
		{
			if (a < m)
				printf("%d, ", array[a]);
			else
				printf("%d\n", array[a]);
		}
		b = (n + m) / 2;
		if (array[b] < value)
			n = b + 1;
		else if (array[b] < value)
			m = b - 1;
		else
			return (b);
	}
	return (-1);
}
