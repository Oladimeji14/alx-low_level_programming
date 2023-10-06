#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Task that print negative and positive number with zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
	{
		printf("%i is postive\n", num);
	}
	else if (num == 0)
	{
		printf("%i is zero\n", num);
	}
	else if (num < 0)
	{
		printf("%i is negative\n", num);
	}
	return (0);

}

