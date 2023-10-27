#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: Input
  * @argv: Input
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int qad = 0, sal = 0;

	if (argc == 3)
	{
		qad = atoi(argv[1]);
		sal = atoi(argv[2]);
		printf("%d\n", qad * sal);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
