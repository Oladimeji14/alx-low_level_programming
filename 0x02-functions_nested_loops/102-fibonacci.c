#include <stdio.h>

/**
 * main - Printing first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long dem1 = 0, dem2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = dem1 + dem2;
		printf("%lu", sum);

		dem1 = dem2;
		dem2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
