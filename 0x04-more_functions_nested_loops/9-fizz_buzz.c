#include "main.h"
#include <stdio.h>

/**
  * main - For numbers which are multiples of both three and five print FizzBuzz
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int qad;

	for (qad = 1; qad <= 100; qad++)
	{
		if ((qad % 3 == 0) && (qad % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (qad % 3 == 0)
		{
			printf("Fizz");
		}
		else if (qad % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", qad);
		}

		if (qad != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
