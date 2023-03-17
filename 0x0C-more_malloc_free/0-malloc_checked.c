#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory
 * @b: int b
 * Return: return p.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	void exit(int status);

	p = malloc(b);

	if (p == NULL)
	{
		printf("Error: malloc failed.\n");
		exit(98);
	}
	return (p);
}
