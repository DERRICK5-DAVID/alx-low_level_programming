#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints character of string in reverse order
 * @s: pointer to array of characters
 * @len: helps in increamenting and reversing
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
