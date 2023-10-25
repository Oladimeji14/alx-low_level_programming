#include "main.h"
#include <stdio.h>

int check_prime(int n, int m);

/**
  * is_prime_number - Returns if a number is prime
  * @n: Input checked
  *
  * Return: Always (0)
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: Output checked
  * @m: iteration times
  *
  * Return: Always (0)
  */
int check_prime(int n, int m)
{
	if (n <= 1)
		return (0);

	if (n % m == 0 && m > 1)
		return (0);

	if ((n / m) < m)
		return (1);

	return (check_prime(n, m + 1));
}
