#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: Input
  * @argv: Input
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int z;
	unsigned int a, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (z = 1; z < argc; z++)
		{
			e = argv[z];

			for (a = 0; a < strlen(e); a++)
			{
				if (e[a] < 48 || e[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
