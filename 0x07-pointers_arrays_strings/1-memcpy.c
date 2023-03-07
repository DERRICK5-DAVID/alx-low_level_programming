#include <stdio.h>
/**
 * _memcpy - stores memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: allocated memory in bytes
 * Return: return destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
