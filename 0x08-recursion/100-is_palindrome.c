#include <stdio.h>
/**
 * is_prime_number - Returns 1 if n is prime, otherwise returns 0
 * is_prime_helper - returns 1 if input int is a prime number, else return 0
 * @n: int n
 * @i: int i
 * Return: return int
 */

/*
 * is_prime_number - Returns 1 if n is prime, otherwise returns 0
 * @n: int n
 * Return: return int
 */


int is_prime_helper(int n, int i);

/* Returns 1 if n is prime, otherwise returns 0 */
int is_prime_number(int n)
{
	/* Edge case: If n is less than 2, it is not prime */
	if (n < 2)
	{
	return (0);
	}
	/* Call the helper function with i = 2 */
	return (is_prime_helper(n, 2));
}
/* Recursive helper function to check if a number is prime */
/**
 * is_prime_helper - returns 1 if input int is a prime number, else return 0
 * @n: int n
 * @i: int i
 * Return: return int
 */

int is_prime_helper(int n, int i)
{
	/* Base case: If i reaches n, n is prime */
	if (i == n)
	{
		return (1);
	}
	/* If n is divisible by i, it is not prime */
	if (n % i == 0)
	{
	return (0);
	}
	/* Otherwise, check if n is divisible by i+1 */
	return (is_prime_helper(n, i + 1));
}
