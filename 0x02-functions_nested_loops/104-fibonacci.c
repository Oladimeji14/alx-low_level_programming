#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long dem1 = 0, dem2 = 1, sum;
	unsigned long dem1_half1, dem1_half2, dem2_half1, dem2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = dem1 + dem2;
		printf("%lu, ", sum);

		dem1 = dem2;
		dem2 = sum;
	}

	dem1_half1 = dem1 / 10000000000;
	dem2_half1 = dem2 / 10000000000;
	dem1_half2 = dem1 % 10000000000;
	dem2_half2 = dem2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = dem1_half1 + dem2_half1;
		half2 = dem1_half2 + dem2_half2;
		if (dem1_half2 + dem2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		dem1_half1 = dem2_half1;
		dem1_half2 = dem2_half2;
		dem2_half1 = half1;
		dem2_half2 = half2;
	}
	printf("\n");
	return (0);
}
