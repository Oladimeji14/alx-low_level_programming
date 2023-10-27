#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: Input
 * @argv: Input
 *
 * Return: Output 
 */
int main(int argc, char *argv[])
{
	int qad, sal = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	qad = atoi(argv[1]);

	while (qad > 0)
	{
		sal++;
		if ((qad - 25) >= 0)
		{
			qad -= 25;
			continue;
		}
		if ((qad - 10) >= 0)
		{
			qad -= 10;
			continue;
		}
		if ((qad - 5) >= 0)
		{
			qad -= 5;
			continue;
		}
		if ((qad - 2) >= 0)
		{
			qad -= 2;
			continue;
		}
		qad--;
	}

	printf("%d\n", sal);

	return (0);
}
