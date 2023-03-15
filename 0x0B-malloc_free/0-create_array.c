#include <stdlib.h>
/**
 * create_array -  creates array of chars
 * @size: size value
 * @c: char variable c
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

/* If size is 0, return NULL */
	if (size == 0)
	{
		return (NULL);
	}
/* Allocate array memory */
	array = malloc(sizeof(char) * size);

/* If allocation fails, return NULL */
	if (array == NULL)
	{
		return (NULL);
	}
/* Initialize the array with the specified char */
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
/* Return the pointer to the array */
	return (array);
}
