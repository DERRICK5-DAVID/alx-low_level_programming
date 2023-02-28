#include "main.h"
#include <stdio.h>
/**
 * swap_int -Swaps the values of both variables
 * @a: value of a
 * @b: value of b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
