#include <stdio.h>
/**
 * _strspn - searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: character pointer
 * 
 * Return: return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char* ptr = accept;
	while (*ptr != '\0')
	{
		if (*ptr == *s)
	{
		return (s);
	}
		ptr++;
	}
	s++;
	}
	return (NULL);
}

