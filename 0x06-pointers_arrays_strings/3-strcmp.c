#include <stdio.h>
/**
 * _strcmp -  compares two strings
 * @s1: pointer to s1
 * @s2: pointer to s2
 * Return: return comparison of two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
}
