#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int min
 * @max: int max
 * Return: arr.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
