#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: the array to iterate over
 * @size: the size of the array
 * @cmp: a pointer to cmp
 *
 * Return: return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
	}
	return (-1);
}
