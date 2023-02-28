#include "main.h"
#include <stdio.h>

/**
 * _puts - prints out the characters of a string
 * @*str: pointer to character array
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
		str++;
	}
	putchar('\n');
}
