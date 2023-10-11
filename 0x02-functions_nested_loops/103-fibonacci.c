#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long dem1 = 0, dem2 = 1, demsum;
	float tot_sum;

	while (1)
	{
		demsum = dem1 + dem2;
		if (demsum > 4000000)
			break;

		if ((demsum % 2) == 0)
			tot_sum += demsum;

		dem1 = dem2;
		dem2 = demsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
