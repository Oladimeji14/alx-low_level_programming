#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: A pointer to the sorted array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index of the value in the array if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, mid = 0;

	if (!array || size == 0)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
