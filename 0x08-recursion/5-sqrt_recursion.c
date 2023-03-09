#include <stdio.h>
/**
 * sqrt_helper - function returns value of x raised to the power of y
 * _sqrt_recursion - the square root of n if it is a perfect square
 * @n: int n
 * @start: start int
 * @end: end int
 * Return: return void
 */

int sqrt_helper(int n, int start, int end);

/* Returns the square root of n if it is a perfect square, else returns -1 */
/**
 * _sqrt_recursion - the square root of n if it is a perfect square
 * @n: int n
 * Return: return void
 */

int _sqrt_recursion(int n)
{
	/* Edge case: If n is negative, there is no natural square root */
	if (n < 0)
	{
	return (-1);
	}
	/* Call the helper function with start = 1 and end = n */
	return (sqrt_helper(n, 1, n));
}
/* Recursive helper function to find the square root using binary search */
/**
 * sqrt_helper - function returns value of x raised to the power of y
 * @n: int n
 * @start: start int
 * @end: end int
 * Return: return void
 */

int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
	return (-1);
	}
	/* Calculate the middle point */
	mid = (start + end) / 2;

	/* If the middle point is the square root, return it */
	if (mid * mid == n)
	{
	return (mid);
	}
	if (mid * mid > n)
	{
	return (sqrt_helper(n, start, mid - 1));
	}
	return (sqrt_helper(n, mid + 1, end));
}
