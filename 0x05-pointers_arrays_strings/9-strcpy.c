#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers.
* @a: pointer to array.
* @n: number of array elements.
*
* Return: void.
*/

char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}
