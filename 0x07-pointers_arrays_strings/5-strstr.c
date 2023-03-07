#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: string pointer
 * @needle: character pointer
 * 
 * Return: return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);
	}
	while (*haystack != '\0')
	{
	char *hptr = haystack;

	char *nptr = needle;

	while (*nptr != '\0' && *hptr == *nptr)
	{
		nptr++;
		hptr++;
	}
	if (*nptr == '\0')
	{
		return (haystack);
	}
		haystack++;
	}
	return (NULL);
}

