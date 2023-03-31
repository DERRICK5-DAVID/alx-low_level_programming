#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h
/**
* free_list -  frees a list_t list
* @head: pointer list_t
* Return: new_node .
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
}
