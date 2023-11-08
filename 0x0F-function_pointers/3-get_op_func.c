#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - Operation
  * @s: Input
  *
  * Return: input
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int qad = 0;

	while (qad < 5)
	{
		if (strcmp(s, ops[qad].op) == 0)
			return (ops[qad].f);

		qad++;
	}

	return (0);
}
