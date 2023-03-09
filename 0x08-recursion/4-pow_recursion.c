#include <stdio.h>
/**
 * _pow_recursion - function returns value of x raised to the power of y
 * @x: int x
 * @y: int y
 * Return: return void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Error case: y is negative */
	{
		return (-1);
	}
	else if (y == 0)  /* Base case: y is 0 */
	{
		return (1);
	}
	else  /* Recursive case: y is greater than 0 */
	{
	/* Recursively call the function with y-1 and multiply by x */
		return (x * _pow_recursion(x, y - 1));
	}
}
