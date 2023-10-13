#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long qad, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (qad = 1; qad <= square; qad++)
	{
		if (number % qad == 0)
		{
			maxf = number / qad;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}

