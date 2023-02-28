#include "main.h"
#include <stdio.h>
/**
* _strcpy - prints n elements of an array of integers.
* @src: pointer to array.
* @dest: number of array elements.
*
* Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
char *p = dest;

while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
