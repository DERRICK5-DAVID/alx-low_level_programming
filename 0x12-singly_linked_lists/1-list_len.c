#include < stdio.h >
#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements a linked list_t list
 * @h: pointer h
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
