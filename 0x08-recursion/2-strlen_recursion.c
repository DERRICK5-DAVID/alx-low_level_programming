#include <stdio.h>
/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s: string pointer
 * 
 * Return: return void
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')  /* Base case: end of string reached */
{
	return (0);
}
/* Recursively call function with the next char and add 1 to it result */
return (1 + _strlen_recursion(s + 1));
}
