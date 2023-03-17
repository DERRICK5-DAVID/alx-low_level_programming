#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int nmemb
 * @size: unsigned to size
 * Return: return ptr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
	memset(ptr, 0, total_size);
	}

	return (ptr);
}

