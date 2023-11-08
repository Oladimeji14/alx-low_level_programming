#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Addtion
  * @a: sum
  * @b: sum
  *
  * Return: out
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: minus
  * @b: minus
  *
  * Return: output
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mutilpy
  * @a: x
  * @b: x
  *
  * Return: output
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - devision
  * @a: divide
  * @b: divided
  *
  * Return: output
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - operation
  * @a: operation
  * @b: input
  *
  * Return: output
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
