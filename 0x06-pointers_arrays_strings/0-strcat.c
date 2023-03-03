#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: return destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*ptr)
	{
		ptr++;
	}
	/* Copy the src string to the end of the dest string */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	/* Add a terminating null byte to the end of the concatenated string */
	*ptr = '\0';
	/* Return a pointer to the resulting string dest */
	return (dest);
}
