#include <stdio.h>
/**
 * factorial - a function that returns the factorial of a given number
 * @n: int n
 *
 * Return: return void
 */
int factorial(int n)
{
if (n < 0)  /* Error case: n is negative */
	{
	return -1;
	}
	else if (n == 0)  /* Base case: n is 0 */
	{
		return (1);
	}
	else  /* Recursive case: n is greater than 0 */
	{
	/* Recursively call the function with n-1 and multiply by n */
		return (n * factorial(n - 1));
	}
}
