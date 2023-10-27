#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: Input
  * @argv: Input
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int qad;

	for (qad = 0; qad < argc; qad++)
	{
		printf("%s\n", argv[qad]);
	}

	return (0);
}
