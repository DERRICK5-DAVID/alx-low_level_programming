#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to ptr
 * @old_size: unsigned int old_size
 * @new_size: unsigned int new_size
 * Return: new_ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

/* If new_size is 0, equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
/* Allocate memory for the new block */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
/* If malloc fails, return NULL */
	return (NULL);
	}
/* Copy the contents from the old block to the new block */
	if (new_size >= old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
/* Free the old block */
	free(ptr);
	return (new_ptr);
}
