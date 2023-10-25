#include "main.h"
#include <stdio.h>

int _sqrt(int n, int m);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: Input the natural square root
  *
  * Return: Always (0)
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Return natural square root
  * @n: Input the square root
  * @m: iterate number
  *
  * Return: Always (0)
  */
int _sqrt(int n, int m)
{
	int sqrt = m * m;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (m);

	return (_sqrt(n, m + 1));
}
