#include <stdlib.h>
/**
 * print_name - prints name
 * @name: pointer to name
 * @f: f pointer to function
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	char *name_copy;
	int len;
	int i;

/* Determine the length of the name */
	len = 0;

	while (name[len] != '\0')
	{
		len++;
	}

/* Allocate memory for the null-terminated name string */
	name_copy = malloc((len + 1) * sizeof(char));
	/* Copy the name to the new memory block */
	/* int i; */

	for (i = 0; i < len; i++)
	{
		name_copy[i] = name[i];
	}
	name_copy[len] = '\0';

/* Call the provided function with the copied name string */
	f(name_copy);

/* Free the memory used for the name copy */
	free(name_copy);

/* Exit the program */
	exit(0);
}
