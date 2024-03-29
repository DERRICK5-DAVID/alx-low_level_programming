#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - returns number of elements a linked list_t list
 * @h: pointer to h
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
