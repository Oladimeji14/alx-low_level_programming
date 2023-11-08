#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - calculation
  * @argc: input
  * @argv: input
  *
  * Return: output
  */
int main(int argc, char *argv[])
{
	int (*sal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	sal = get_op_func(argv[2]);

	if (!sal)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", sal(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
