/**
 * _strlen - compute lenght of string
 * @s: put string together
 * Return: lenght
 */
#include <stdio.h>

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
