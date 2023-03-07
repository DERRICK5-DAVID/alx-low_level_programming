#include <stdio.h>
/**
 * _memcpy - stores memory area
 * @s: string pointer
 * @c: character pointer
 * 
 * Return: return destination
 */
char* _strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return s;
	}
	s++;
	}
    if (*s == c)
	{
	return s;
	}
	return (NULL);
}

